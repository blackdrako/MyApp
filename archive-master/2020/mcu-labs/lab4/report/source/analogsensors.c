// Analog sensors functions
#include "function_prototype.h"
#include "sysfunc.h"
#include "analogsensors.h"

const float HIH_zero_offset = 0.958;    // параметр "начальное смещение" датчика влажности, В
const float HIH_slope = 0.03068;        // параметр "угол наклона датчика", В / %RH
const float HIH_ion = 3.3;              // опорное напряжение, В
const float HIH_divisor = 1.1;          // коэффициент резистивного делителя

const float INA_RS = 0.21;              // измерительное сопротивление, Ом
const float INA_RL = 30.1;              // сопротивление нагрузки, Ом


// Получить значение относительной влажности, %RH
float HIH_get_hum()
{
  P6SEL |= BIT0;          // выбор для ножки P6.0 функции АЦП ADC0, к которому подключен датчик влажности
  ADC12CTL1 = SHP + CSTARTADD_0; // таймер выборки и стартовый адрес преобразования - ADC12MEM0
  // выбор опорного напряжения - Vr+ = VеREF+ = 3.3В, Vr- = AVss = 0В
  //    и входного канала ADC0 для ячейки памяти ADC12MEM0
  ADC12MCTL0 = SREF_3 + INCH_0;
  ADC12CTL0 = ADC12ON;    // включение АЦП
  
  ADC12CTL0 |= ENC;       // преобразование разрешено
  ADC12CTL0 |= ADC12SC;   // запуск преобразования
  while ((ADC12IFG & BIT0)==0); // ожидание результата преобразования

  // пересчет результата преобразования АЦП в значение влажности
  //    с учетом делителя и опорного напряжения
  float rh = (((ADC12MEM0/4095.0) * HIH_ion * HIH_divisor) - HIH_zero_offset) / HIH_slope;

  ADC12CTL0 = 0;          // выключение АЦП
  return rh;
}


// Получить значение тока потребления системы, А
float INA_get_curr()
{
  P6SEL |= BIT1;          // выбор АЦП ADC1, к которому подключен датчик тока
  ADC12CTL1 = SHP + CSTARTADD_1; // таймер выборки и стартовый адрес преобразования - ADC12MEM1

  // выбор опорного напряжения - Vr+ = VеREF+ = 3.3В, Vr- = AVss = 0В
  //    и входного канала ADC1 для ячейки памяти ADC12MEM1
  ADC12MCTL1 = SREF_3 + INCH_1;
  ADC12CTL0 = ADC12ON;    // включение АЦП
  
  ADC12CTL0 |= ENC;       // преобразование разрешено
  ADC12CTL0 |= ADC12SC;   // запуск преобразования
  while ((ADC12IFG & BIT1)==0); // ожидание результата преобразования АЦП ADC1

  // пересчет результата преобразования АЦП в значение тока потребления системы
  //    с учетом измерительного сопротивления и сопротивления нагрузки:
  float curr = (ADC12MEM1*3.3) / (4095.0 * INA_RS * INA_RL);

  ADC12CTL0 = 0;          // выключение АЦП
  return curr;
}


// Получить значение сопротивления подстроечного резистора R22, Ом
word R22_get_resistance()
{
  P2SEL &= ~(Rref+Rx);            // функция ввода-вывода для ножек P2.4 и P2.5
  word Nref = res_measure(Rref);  // время разряда через опорный резистор
  word Nx = res_measure(Rx);      // время разряда через подстроечный резистор
  return ((100000*Nx)/Nref)-10000; // R22 = (100000 * Nx / Nref) - 10000
}


// Измерение времени разряда конденсатора через resistor (Rref или Rx)
word res_measure(byte Rpin)
{
  P2DIR &= ~Rx;  // отключить Rx от конденсатора (направление - ввод)
  // заряд конденсатора через опорный резистор Rref
  CAPD = ~Rref;   // отключение аналоговых сигналов от порта компаратора
  P2DIR |= Rref;  // подключить Rref к конденсатору (направление - на вывод)
  P2OUT |= Rref;  // установка ножки Rref- заряд кондесатора 
  TBCCR1 = 65000;     // время заряда
  TBCCTL1 = CCIE;     // разрешить прерывания
  // тактирование от SMCLK, делитель /4, очистка счетчика, непрерывный режим счета (РАЗОБРАТСЯ)
  TBCTL = TBSSEL_2 + ID_2 + TBCLR + MC_2;
  TBCTL &= ~CNTL0;
  TBCTL &= ~CNTL1;
  LPM0;            // перейти в режим пониженного потребления и ожидать прерывания

  CACTL2 = P2CA0 | CAF; // вход компаратора подключается к CA0, вкл.выходного фильтра
  // включение компаратора, опорное напр. 0.25*Vcc прикладывается к "-" 
  CACTL1 = CARSEL+CAREF_1+CAON; 
  CAPD = ~(Rpin+CA0);
  P2DIR &= ~Rref;     // отключить Rref от конденсатора (направление - ввод)
  P2DIR |= Rpin;  // будем разряжать через ножку Rpin
  P2OUT &= ~Rpin; // низкий уровень на Rpin - разряд конденсатора
  // захват по заднему фронту, входной сигнал - CCI1B, режим захвата, прерывания разрешены
  TBCCTL1 = CM_2+CCIS_1+CAP+CCIE;
  TBCTL |= TBCLR;                  // сбросить счетчик таймера
  LPM0;            // перейти в режим пониженного потребления и ожидать прерывания

  TBCTL = 0x00;       // остановить таймер
  CACTL1 = 0x00;      // отключить компаратор
  CAPD = 0;           // включить входные буферы компаратора
  return TBCCR1;      // возвращаем значение счетчика таймера
}


// обработчик прерываний от таймера
#pragma vector=TIMERB1_VECTOR
__interrupt void isrTIMERB(void)
{
  LPM0_EXIT;                                // выход из LPM0
  TBCCTL1 &= ~CCIFG;                        // очистка флага прерывания
}
