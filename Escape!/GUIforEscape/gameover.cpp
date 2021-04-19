#include "gameover.h"
#include "gamestart.h"
#include "ui_gameover.h"

gameOver::gameOver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameOver)
{
    ui->setupUi(this);
}

gameOver::~gameOver()
{
    delete ui;
}

void gameOver::on_pushButton_clicked() //QUIT Button
{
    gameOver::close();
}
