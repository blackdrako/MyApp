#ifndef FORMSETTINGGAMEPLAY_H
#define FORMSETTINGGAMEPLAY_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class formsettinggameplay;
}

class formsettinggameplay : public QWidget
{
    Q_OBJECT

public:
    explicit formsettinggameplay(QWidget *parent = nullptr);
    ~formsettinggameplay();
signals:
    void backWindow();
private slots:
    void on_pushButton_backWindow();
private:
    Ui::formsettinggameplay *ui;
    QPushButton *buttonBackWindow;
};

#endif // FORMSETTINGGAMEPLAY_H
