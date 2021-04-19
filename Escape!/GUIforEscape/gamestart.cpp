#include <iostream>
#include <Windows.h>
using namespace std;

#include "gameover.h"
#include "gamestart.h"
#include "ui_gamestart.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <chrono>


int health = 100;
int timer = 600;  //10 mins timer
int location = 0; //global variables
                  //0 = Prison, 1 = Police Station, 2 = Armory, 3 = Security Checkpoint, 4 = Tram Station, 5 = Military Base,
                  //6 = Airfield, 7 = Helipad


gameStart::gameStart(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gameStart)
{
    ui->setupUi(this);

    ui->progressBar->setValue(health); //Setting default health bar to 100%

    if(health <= 0 || timer <= 0)
    {
        gameStart::close(); //closes intial window
        gameover = new gameOver(this);
        gameover->show();
        gameover->setAttribute(Qt::WA_DeleteOnClose); //Memory management
    }

}


gameStart::~gameStart()
{
    delete ui;
    if(health <= 0 || timer <= 0)
    {
        gameover = new gameOver(this);
        gameover->show();
        gameover->setAttribute(Qt::WA_DeleteOnClose); //Memory management
        gameStart::hide(); //hides intial window
    }
}

void gameStart::on_pushButton_7_clicked() //Quit Button
{
    gameStart::close();
}

void gameStart::on_pushButton_6_clicked() //Info and Help Button
{
    infoandhelp1 = new infoandhelp(this);
    infoandhelp1->show();
    infoandhelp1->setAttribute(Qt::WA_DeleteOnClose); //Memory management
}

void gameStart::on_pushButton_5_clicked() //Settings Button
{
    settings1 = new settings(this);
    settings1->show();
    settings1->setAttribute(Qt::WA_DeleteOnClose); //Memory management
}

void gameStart::on_pushButton_clicked() //Go South Button
{
    if(location==0)
    {
    QFile file(":/new/prefix1/TextFiles/PoliceStationDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location++; //location = 1, ie Police Station

    //Timer starts when left cell
    ui->timer->display(timer);

    }
    else if(location==1)
    {
    QFile file(":/new/prefix1/TextFiles/ArmoryDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location++; //location = 2, ie Armory
    timer = timer - 50;
    ui->timer->display(timer);
    }
    else if(location==5)
    {
    QFile file(":/new/prefix1/TextFiles/SecurityCheckpointDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location = location - 2; //location = 3, ie Security Checkpoint
    timer = timer - 50;
    ui->timer->display(timer);
    }
    else if(location==6)
    {
    QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location--; //location = 5 , ie Military Base
    timer = timer - 50;
    ui->timer->display(timer);
    }
}



void gameStart::on_pushButton_2_clicked() //Go North Button
{

    if(location==2)
    {
    QFile file(":/new/prefix1/TextFiles/PoliceStationDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location--; //location = 1, ie Police Station
    timer = timer - 50;
    ui->timer->display(timer);
    }
    else if(location==1)
    {
    QFile file(":/new/prefix1/TextFiles/PrisonDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location--; //location = 0, ie Prison
    timer = timer - 50;
    ui->timer->display(timer);
    }
    else if(location==3)
    {
        QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location = location + 2; //location = 5, ie Military Base
        timer = timer - 50;
        ui->timer->display(timer);
    }
    else if(location==5)
    {
        QFile file(":/new/prefix1/TextFiles/AirfieldDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 6, ie Airfield
        timer = timer - 50;
        ui->timer->display(timer);
    }
    else if(location==6)
    {
        QFile file(":/new/prefix1/TextFiles/HelipadDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 7, ie Helipad
        timer = timer - 50;
        ui->timer->display(timer);
    }
}



void gameStart::on_pushButton_3_clicked() //Go East Button
{
    if(location==1)
    {
    QFile file(":/new/prefix1/TextFiles/SecurityCheckpointDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location = location + 2; //location = 3, ie Security Checkpoint
    timer = timer - 50;
    ui->timer->display(timer);
    }
    else if(location==3)
    {
        QFile file(":/new/prefix1/TextFiles/TramDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 4, ie Security Checkpoint
        timer = timer - 50;
        ui->timer->display(timer);
    }
}

void gameStart::on_pushButton_4_clicked() //Go West Button
{
    if(location==3)
    {
         QFile file(":/new/prefix1/TextFiles/PoliceStationDescription.txt");
         if(!file.open(QIODevice::ReadOnly))
         QMessageBox::information(0, "info", file.errorString());
         QTextStream in(&file);
         ui->dialogueBox->setText(in.readAll());
         location = location - 2; //location = 1, ie Police Station
         timer = timer - 50;
         ui->timer->display(timer);
    }
    else if(location==4)
    {
        QFile file(":/new/prefix1/TextFiles/SecurityCheckpointDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location--; //location = 3, ie Security Checkpoint
        timer = timer - 50;
        ui->timer->display(timer);
    }
}



void gameStart::on_pushButton_8_clicked() //Option 1 Button
{
    if(location==0) //Fight guard
    {
        health = health - 25;
        ui->progressBar->setValue(health);
    }
    else if(location==1) //Pickup first aid kit
    {
        health = 100;
        ui->progressBar->setValue(health);

    }
    else if(location==4)
    {
        QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 5, ie Military Base
        timer = timer - 25;
        ui->timer->display(timer);
    }


}

void gameStart::on_pushButton_9_clicked()
{
    if(location == 0) //Sneaking out
    {
        QFile file(":/new/prefix1/TextFiles/PoliceStationDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 1, ie Police Station
    }
}

void gameStart::on_progressBar_valueChanged(int value)
{

}

void gameStart::on_pushButton_10_clicked() //Wait in cell
{


        gameover = new gameOver(this);
        gameover->show();
        gameover->setAttribute(Qt::WA_DeleteOnClose); //Memory management
        gameStart::hide(); //hides intial window

}
