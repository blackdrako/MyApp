#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <formloadgame.h>
#include <formstratgame.h>
#include <formsetting.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked_LoadGame();
    void on_pushButton_clicked_StartGame();
    void on_pushButton_clicked_settingGame();
private:
    Ui::MainWindow *ui;
    formloadgame *m_formLoadGame;
    formstratgame *m_formStartGame;
    formsetting *m_formSettingGame;
    QPushButton *buttonLoadGame;
    QPushButton *buttonStartGame;
    QPushButton *buttonSettingGame;
    QPushButton *exitGame;
};

#endif // MAINWINDOW_H
