#include "formsettingsound.h"
#include "ui_formsettingsound.h"

formsettingsound::formsettingsound(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formsettingsound)
{
    ui->setupUi(this);
    buttonBackWindow = new QPushButton("Back",this);
    buttonBackWindow->setGeometry(QRect(QPoint(100,100),QSize(200,50)));
    connect(buttonBackWindow,SIGNAL(released()),this,SLOT (on_pushButton_backWindow()));
}

formsettingsound::~formsettingsound()
{
    delete ui;
}

void formsettingsound::on_pushButton_backWindow()
{
    this->close();
    emit backWindow();
}
