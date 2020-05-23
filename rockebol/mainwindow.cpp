#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "setting.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(QApplication::);

    buttonStartGame = new QPushButton("Start Game",this);
    buttonStartGame->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonStartGame,SIGNAL(released()),this,SLOT (on_pushButton_clicked_StartGame()));
    m_formStartGame = new formstratgame;
    connect(m_formStartGame,&formstratgame::backMainWindow,this,&MainWindow::show);

    buttonLoadGame = new QPushButton("Load Game",this);
    buttonLoadGame->setGeometry(QRect(QPoint(80,250),QSize(200,50)));
    connect(buttonLoadGame,SIGNAL(released()),this,SLOT (on_pushButton_clicked_LoadGame()));
    m_formLoadGame = new formloadgame;
    connect(m_formLoadGame,&formloadgame::backMainWindow,this,&MainWindow::show);

    buttonSettingGame = new QPushButton("Setting",this);
    buttonSettingGame->setGeometry(QRect(QPoint(100,400),QSize(200,50)));
    connect(buttonSettingGame,SIGNAL(released()),this,SLOT (on_pushButton_clicked_settingGame()));
    m_formSettingGame = new formsetting;
    connect(m_formSettingGame,&formsetting::backMainWindow,this,&MainWindow::show);

    exitGame = new QPushButton("Exit",this);
    exitGame->setGeometry(QRect(QPoint(80,550),QSize(200,50)));
    connect(buttonLoadGame,SIGNAL(released()),this,SLOT ());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked_StartGame()
{
    m_formStartGame->show();
    this->close();
}

void MainWindow::on_pushButton_clicked_LoadGame()
{
    m_formLoadGame->show();
    this->close();
}

void MainWindow::on_pushButton_clicked_settingGame()
{
    m_formSettingGame->show();
    this->close();
}
