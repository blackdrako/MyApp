#include "unit.h"

void unit::strike(unit &enem){
    if(this->ocko > 0){
        this->ocko = this->ocko - 1;
        enem.HP = enem.HP-this->phisAtt;
    } else {
        qDebug() << "No Ockto:" << this->ocko;
    }
}

void unit::ViewBaseStats(){
    qDebug() << NameUnit;
    qDebug() << "HP[" << HP << "/" << MaxHP << "] RegenHP:" << HPRegen;
    qDebug() << "Armor:" << Armor;
    qDebug() << "PhisAttack" << phisAtt;
}
unit& unit::operator=(const unit &rhs){
    NameUnit = rhs.NameUnit;
    HP = rhs.HP;
    MaxHP = rhs.MaxHP;
    Armor = rhs.Armor;
    HPRegen = rhs.HPRegen;
    phisAtt = rhs.phisAtt;
    ocko = rhs.ocko;
}

void unit::attacka(unit &enem){}
