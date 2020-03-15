#include "formsettinggameplay.h"
#include "ui_formsettinggameplay.h"

formsettinggameplay::formsettinggameplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formsettinggameplay)
{
    ui->setupUi(this);
    buttonBackWindow = new QPushButton("Back",this);
    buttonBackWindow->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonBackWindow,SIGNAL(released()),this,SLOT (on_pushButton_backWindow()));
}

formsettinggameplay::~formsettinggameplay()
{
    delete ui;
}

void formsettinggameplay::on_pushButton_backWindow()
{
    this->close();
    emit backWindow();
}
