#ifndef FORMSTRATGAME_H
#define FORMSTRATGAME_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class formstratgame;
}

class formstratgame : public QWidget
{
    Q_OBJECT

public:
    explicit formstratgame(QWidget *parent = nullptr);
    ~formstratgame();

signals:
    void backMainWindow();
private slots:
    void on_pushButton_backMainWindow();
private:
    Ui::formstratgame *ui;
    QPushButton *buttonBackMainWindow;
};

#endif // FORMSTRATGAME_H
