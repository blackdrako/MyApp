#include "formsetting.h"
#include "ui_formsetting.h"

formsetting::formsetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formsetting)
{
    ui->setupUi(this);
    buttonGamePlaySetting = new QPushButton("Gameplay",this);
    buttonGamePlaySetting->setGeometry(QRect(QPoint(700,150),QSize(200,50)));
    connect(buttonGamePlaySetting,SIGNAL(released()),this,SLOT (on_pushButton_formGameplaySetting()));
    m_formSettingGameplay = new formsettinggameplay;
    connect(m_formSettingGameplay,&formsettinggameplay::backWindow,this,&formsetting::show);

    buttonGraphicSetting = new QPushButton("Graphic",this);
    buttonGraphicSetting->setGeometry(QRect(QPoint(700,300),QSize(200,50)));
    connect(buttonGraphicSetting,SIGNAL(released()),this,SLOT (on_pushButton_formGraphicSetting()));
    m_formSettingGraphic = new formsettinggraphic;
    connect(m_formSettingGraphic,&formsettinggraphic::backWindow,this,&formsetting::show);

    buttonSoundSetting = new QPushButton("Sound",this);
    buttonSoundSetting->setGeometry(QRect(QPoint(700,450),QSize(200,50)));
    connect(buttonSoundSetting,SIGNAL(released()),this,SLOT (on_pushButton_formSoundSetting()));
    m_formSettingSound = new formsettingsound;
    connect(m_formSettingSound,&formsettingsound::backWindow,this,&formsetting::show);

    buttonBackMainWindow = new QPushButton("Back",this);
    buttonBackMainWindow->setGeometry(QRect(QPoint(700,600),QSize(200,50)));
    connect(buttonBackMainWindow,SIGNAL(released()),this,SLOT (on_pushButton_backMainWindow()));
}

formsetting::~formsetting()
{
    delete ui;
}

void formsetting::on_pushButton_backMainWindow()
{
    this->close();
    emit backMainWindow();
}

void formsetting::on_pushButton_formGameplaySetting()
{
    m_formSettingGameplay->show();
    this->close();
}

void formsetting::on_pushButton_formGraphicSetting()
{
    m_formSettingGraphic->show();
    this->close();
}

void formsetting::on_pushButton_formSoundSetting()
{
    m_formSettingSound->show();
    this->close();
}
