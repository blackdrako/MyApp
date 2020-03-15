#include "formsettinggraphic.h"
#include "ui_formsettinggraphic.h"

formsettinggraphic::formsettinggraphic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formsettinggraphic)
{
    ui->setupUi(this);
    buttonBackWindow = new QPushButton("Back",this);
    buttonBackWindow->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonBackWindow,SIGNAL(released()),this,SLOT (on_pushButton_backWindow()));
}

formsettinggraphic::~formsettinggraphic()
{
    delete ui;
}

void formsettinggraphic::on_pushButton_backWindow()
{
    this->close();
    emit backWindow();
}
