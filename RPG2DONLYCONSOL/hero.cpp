#include "hero.h"
hero::hero(){}

hero::hero(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit){
    HP = nHP;
    MaxHP = nMaxHP;
    Armor = nArmor;
    phisAtt = nphisAtt;
    NameUnit = nNameUnit;
}

void hero::attacka(unit &enem){
    this->strike(enem);
    qDebug() << NameUnit << " attack  " << enem.NameUnit << phisAtt << "damage [" << enem.HP << "/" << enem.MaxHP << "]";
}

hero& hero::operator=(const unit &rhs){
    NameUnit = rhs.NameUnit;
    HP = rhs.HP;
    MaxHP = rhs.MaxHP;
    Armor = rhs.Armor;
    HPRegen = rhs.HPRegen;
    phisAtt = rhs.phisAtt;
    ocko = rhs.ocko;
    RegenOcko = rhs.RegenOcko;
}
