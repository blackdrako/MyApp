#include "formquickmatch.h"
#include "ui_formquickmatch.h"

formquickmatch::formquickmatch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::formquickmatch)
{
    ui->setupUi(this);
}

formquickmatch::~formquickmatch()
{
    delete ui;
}
