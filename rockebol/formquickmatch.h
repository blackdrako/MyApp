#ifndef FORMQUICKMATCH_H
#define FORMQUICKMATCH_H

#include <QWidget>

namespace Ui {
class formquickmatch;
}

class formquickmatch : public QWidget
{
    Q_OBJECT

public:
    explicit formquickmatch(QWidget *parent = nullptr);
    ~formquickmatch();

private:
    Ui::formquickmatch *ui;
};

#endif // FORMQUICKMATCH_H
