#include "setuptab2.h"
#include "ui_setuptab2.h"

setuptab2::setuptab2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setuptab2)
{
    ui->setupUi(this);
}

setuptab2::~setuptab2()
{
    delete ui;
}
