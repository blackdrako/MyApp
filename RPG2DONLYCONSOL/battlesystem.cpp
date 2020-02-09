#include "battlesystem.h"
#include "sborka.h"
#include <windows.h>
#include <conio.h>
#include <thread>
#include <iostream>
#include <chrono>

BattleSystem::BattleSystem(unit &M,unit &enemy){
    this->My = M;
    this->enem = enemy;
    Turn = 0;
    key = 0;
    resenia = false;
    bool NextTurn = false;
    this->Info();
    while(resenia == false){
        qDebug() << "Turn:" << Turn;
        while(My.ocko != 0){
            CheckKeyPressEvent(key);
            if(NextTurn == true) break;
        }
        NextTurn = false;
        while(enem.ocko != 0){
            enem.Battle_AI(My);
            if(NextTurn == true) break;
        }
        if(enem.HP<=0){
            resenia = true;
        }
        if(My.HP<=0){
            resenia = true;
        }
        NextTurn = false;
        Turn++;
        My.ocko = My.ocko+My.RegenOcko;
        enem.ocko = enem.ocko+enem.RegenOcko;
        qDebug() << "Next Turn";
    }
}

BattleSystem::~BattleSystem(){

}

void CheckStats(unit a){
    a.ViewBaseStats();
}

void BattleSystem::Info(){
    CheckStats(this->My);
    CheckStats(this->enem);
}

void BattleSystem::CheckKeyPressEvent(int &key){
    if(key==0){
        key=getch();
        std::cout<<key;
        switch (key) {
        case Qt::Key_0: //esc - выход
            std::cout << "You ponal?";
            break;
        case Qt::Key_1: //a - атака
            My.attacka(enem);
            break;
        case Qt::Key_2: //e - использовать
            std::cout << "Check E";
            break;
        case Qt::Key_3: //e - использовать
            std::cout << "Check E";
            break;
        }
    }
    key = 0;
}
