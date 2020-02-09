#ifndef UNIT_H
#define UNIT_H
#include <QString>
#include <iostream>
#include <QDebug>

class unit
{
public:
    int lvl;
    int HP;
    int MaxHP;
    int Armor;
    int phisAtt;
    int HPRegen;
    int ocko;
    int RegenOcko;
    QString NameUnit;
    void strike(unit &enem);
    virtual void attacka(unit &enem);
    void ViewBaseStats();
    unit& operator=(const unit &rhs);
};

#endif // UNIT_H
