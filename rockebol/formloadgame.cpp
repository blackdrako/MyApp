#include "formloadgame.h"
#include "ui_formloadgame.h"

formloadgame::formloadgame(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formloadgame)
{
    ui->setupUi(this);
    buttonBackMainWindow = new QPushButton("Back",this);
    buttonBackMainWindow->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonBackMainWindow,SIGNAL(released()),this,SLOT (on_pushButton_backMainWindow()));
}

formloadgame::~formloadgame()
{
    delete ui;
}

void formloadgame::on_pushButton_backMainWindow()
{
    this->close();
    emit backMainWindow();
}
