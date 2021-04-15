#include "gamestart.h"
#include "ui_gamestart.h"

gameStart::gameStart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameStart)
{
    ui->setupUi(this);
}

gameStart::~gameStart()
{
    delete ui;
}

void gameStart::on_pushButton_7_clicked()
{
    gameStart::close();
}

void gameStart::on_pushButton_6_clicked()
{
    infoandhelp1 = new infoandhelp(this);
    infoandhelp1->show();
    infoandhelp1->setAttribute(Qt::WA_DeleteOnClose); //Memory management
}

void gameStart::on_pushButton_5_clicked()
{
    settings1 = new settings(this);
    settings1->show();
    settings1->setAttribute(Qt::WA_DeleteOnClose); //Memory management
}
