#include "another.h"

another::another(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit){
    HP = nHP;
    MaxHP = nMaxHP;
    Armor = nArmor;
    phisAtt = nphisAtt;
    NameUnit = nNameUnit;
}

void another::attacka(unit &enem){
    this->strike(enem);
    qDebug() << NameUnit << " attack  " << enem.NameUnit << phisAtt << "damage [" << enem.HP << "/" << enem.MaxHP << "]";
}