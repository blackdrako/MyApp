#ifndef FORMSETTINGGRAPHIC_H
#define FORMSETTINGGRAPHIC_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class formsettinggraphic;
}

class formsettinggraphic : public QWidget
{
    Q_OBJECT

public:
    explicit formsettinggraphic(QWidget *parent = nullptr);
    ~formsettinggraphic();
signals:
    void backWindow();
private slots:
    void on_pushButton_backWindow();
private:
    Ui::formsettinggraphic *ui;
    QPushButton *buttonBackWindow;
};

#endif // FORMSETTINGGRAPHIC_H
