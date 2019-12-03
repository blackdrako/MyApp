#ifndef UNIVERSE_H
#define UNIVERSE_H
#include "base.h"

/*
 * Вселенная в нее могут быть включены разные тайтлы
*/
class univers : base
{
private:
    unsigned count_uni;
    int *id;
    QString name_uni;
    void read_file();
public:
};

#endif // UNIVERSE_H
