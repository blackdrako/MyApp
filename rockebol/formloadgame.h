#ifndef FORMLOADGAME_H
#define FORMLOADGAME_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class formloadgame;
}

class formloadgame : public QWidget
{
    Q_OBJECT

public:
    explicit formloadgame(QWidget *parent = nullptr);
    ~formloadgame();

signals:
    void backMainWindow();
private slots:
    void on_pushButton_backMainWindow();
private:
    Ui::formloadgame *ui;
    QPushButton *buttonBackMainWindow;
};

#endif // FORMLOADGAME_H
