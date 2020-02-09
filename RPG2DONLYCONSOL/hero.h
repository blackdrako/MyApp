#ifndef HERO_H
#define HERO_H
#include "unit.h"

class hero : public unit
{
private:
public:
    hero();
    hero& operator=(const unit& rhs);
    hero(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit);
    void attacka(unit &enem);
};

#endif // HERO_H
