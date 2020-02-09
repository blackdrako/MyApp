#include <QCoreApplication>
#include <iostream>
#include <battlesystem.h>
#include <sborka.h>
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    hero A = hero(100,100,2,15,"Hero");
    A.HPRegen = 2;
    monster B = monster(100,100,2,15,"Goblin");
    B.HPRegen = 2;
    A.ocko = 3;
    B.ocko = 2;
    A.RegenOcko = 2;
    B.RegenOcko = 1;
    BattleSystem AreaBattle = BattleSystem(A,B);
    return app.exec();
}
