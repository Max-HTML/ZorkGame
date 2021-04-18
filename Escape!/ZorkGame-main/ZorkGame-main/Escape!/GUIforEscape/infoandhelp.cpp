#include "infoandhelp.h"
#include "ui_infoandhelp.h"

infoandhelp::infoandhelp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::infoandhelp)
{
    ui->setupUi(this);
}

infoandhelp::~infoandhelp()
{
    delete ui;
}
