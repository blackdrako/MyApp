#ifndef UNIT_H
#define UNIT_H
#include <string>

class Unit
{
private:
public:
    std::string name;
    long int LVL;
    long double maxXP;
    long double maxMP;
    long double tXP;
    long double tMP;
    long double maxAtt;
    long double minAtt;
    bool life;
    Unit();
    virtual void cast_Spell()=0;
    virtual void Attack()=0;
};

#endif // UNIT_H
