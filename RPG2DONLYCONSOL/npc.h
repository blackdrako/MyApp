#ifndef NPC_H
#define NPC_H
#include "unit.h"

class npc : public unit
{
public:
    npc(){}
    npc(int nHP,int nMaxHP,int nArmor,int nphisAtt,QString nNameUnit);
    void attacka(unit &enem);
};

#endif // NPC_H
