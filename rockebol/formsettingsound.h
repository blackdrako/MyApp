#ifndef FORMSETTINGSOUND_H
#define FORMSETTINGSOUND_H

#include <QWidget>
#include <QPushButton>
namespace Ui {
class formsettingsound;
}

class formsettingsound : public QWidget
{
    Q_OBJECT

public:
    explicit formsettingsound(QWidget *parent = nullptr);
    ~formsettingsound();

signals:
    void backWindow();
private slots:
    void on_pushButton_backWindow();
private:
    Ui::formsettingsound *ui;
    QPushButton *buttonBackWindow;
};

#endif // FORMSETTINGSOUND_H
