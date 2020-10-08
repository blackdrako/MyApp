#ifndef BATTLE_H
#define BATTLE_H
#include <monster.h>
#include <character.h>

class battle
{
private:
    long unsigned int counterTurn = 0;
    void mTurn();
    void eTurn();
public:
    battle();
};

#endif // BATTLE_H
