#ifndef SETTING_H
#define SETTING_H
#include <iostream>
#include <string.h>
/*Пример файла
typescreen:0
...*/
class setting
{
private:
    std::string nameFile = "setting.txt";
public:
    setting();
    bool getTypeScreen();//0 - полный экран, 1 - окно
    void setTypeScreen(bool val);
};

#endif // SETTING_H
