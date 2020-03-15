#include "formstratgame.h"
#include "ui_formstratgame.h"

formstratgame::formstratgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formstratgame)
{
    ui->setupUi(this);
    buttonBackMainWindow = new QPushButton("Back",this);
    buttonBackMainWindow->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonBackMainWindow,SIGNAL(released()),this,SLOT (on_pushButton_backMainWindow()));
}

formstratgame::~formstratgame()
{
    delete ui;
}

void formstratgame::on_pushButton_backMainWindow()
{
    this->close();
    emit backMainWindow();
}
