#include "monster.h"

monster::monster(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit){
    HP = nHP;
    MaxHP = nMaxHP;
    Armor = nArmor;
    phisAtt = nphisAtt;
    NameUnit = nNameUnit;
}

void monster::attacka(unit &enem){
    this->strike(enem);
    qDebug() << NameUnit << " attack  " << enem.NameUnit << phisAtt << "damage [" << enem.HP << "/" << enem.MaxHP << "]";
}

int monster::Battle_AI(unit &enem){
    while (this->ocko>0 and enem.HP>0) {
        attacka(enem);
    }
}

monster& monster::operator=(const unit &rhs){
    NameUnit = rhs.NameUnit;
    HP = rhs.HP;
    MaxHP = rhs.MaxHP;
    Armor = rhs.Armor;
    HPRegen = rhs.HPRegen;
    phisAtt = rhs.phisAtt;
    ocko = rhs.ocko;
    RegenOcko = rhs.RegenOcko;
}
