#ifndef MONSTER_H
#define MONSTER_H
#include "unit.h"

class monster : public unit
{
public:
    monster(){}
    monster& operator=(const unit& rhs);
    monster(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit);
    void attacka(unit &enem);
    int Battle_AI(unit &enem);
};

#endif // MONSTER_H
