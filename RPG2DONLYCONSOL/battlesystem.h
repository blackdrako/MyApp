#ifndef BATTLESYSTEM_H
#define BATTLESYSTEM_H
#include "unit.h"
#include "ai.h"
#include "sborka.h"
class BattleSystem
{
private:
    int key;
    unsigned int Turn;
    bool resenia;
    void CheckKeyPressEvent(int &key);
    hero My;
    monster enem;
    void Info();
public:
    BattleSystem(unit &M,unit &enemy);
    ~BattleSystem();
};

#endif // BATTLESYSTEM_H
