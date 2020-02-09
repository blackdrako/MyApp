#ifndef ANOTHER_H
#define ANOTHER_H
#include "unit.h"

class another : public unit
{
public:
    another(){}
    another(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit);
    void attacka(unit &enem);
};

#endif // ANOTHER_H
