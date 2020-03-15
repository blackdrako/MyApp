#ifndef FORMSETTING_H
#define FORMSETTING_H

#include <QWidget>
#include <QPushButton>
#include <formsettinggameplay.h>
#include <formsettinggraphic.h>
#include <formsettingsound.h>
namespace Ui {
class formsetting;
}

class formsetting : public QWidget
{
    Q_OBJECT

public:
    explicit formsetting(QWidget *parent = nullptr);
    ~formsetting();

signals:
    void backMainWindow();
private slots:
    void on_pushButton_formGameplaySetting();
    void on_pushButton_formGraphicSetting();
    void on_pushButton_formSoundSetting();
    void on_pushButton_backMainWindow();
private:
    Ui::formsetting *ui;
    formsettinggameplay *m_formSettingGameplay;
    formsettinggraphic *m_formSettingGraphic;
    formsettingsound *m_formSettingSound;
    QPushButton *buttonGamePlaySetting;
    QPushButton *buttonGraphicSetting;
    QPushButton *buttonSoundSetting;
    QPushButton *buttonBackMainWindow;
};

#endif // FORMSETTING_H
