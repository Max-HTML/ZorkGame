#include "gamestart.h"
#include "ui_gamestart.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

int location = 0; //global variable
                  //0 = Prison, 1 = Police Station, 2 = Armory, 3 = Security Checkpoint, 4 = Tram Station, 5 = Military Base,
                  //6 = Airfield, 7 = Helipad

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
    }
    else if(location==1)
    {
    QFile file(":/new/prefix1/TextFiles/ArmoryDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location++; //location = 2, ie Armory
    }
    else if(location==5)
    {
    QFile file(":/new/prefix1/TextFiles/SecurityCheckpointDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location = location - 2; //location = 3, ie Security Checkpoint
    }
    else if(location==6)
    {
    QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location--; //location = 5 , ie Military Base
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
    }
    else if(location==1)
    {
    QFile file(":/new/prefix1/TextFiles/PrisonDescription.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0, "info", file.errorString());
    QTextStream in(&file);
    ui->dialogueBox->setText(in.readAll());
    location--; //location = 0, ie Prison
    }
    else if(location==3)
    {
        QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location = location + 2; //location = 5, ie Military Base
    }
    else if(location==5)
    {
        QFile file(":/new/prefix1/TextFiles/AirfieldDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 6, ie Airfield
    }
    else if(location==6)
    {
        QFile file(":/new/prefix1/TextFiles/HelipadDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 7, ie Helipad
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
    }
    else if(location==3)
    {
        QFile file(":/new/prefix1/TextFiles/TramDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 4, ie Security Checkpoint
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
    }
    else if(location==4)
    {
        QFile file(":/new/prefix1/TextFiles/SecurityCheckpointDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location--; //location = 3, ie Security Checkpoint
    }
}



void gameStart::on_pushButton_8_clicked() //Option 1 Button
{
    if(location==4)
    {
        QFile file(":/new/prefix1/TextFiles/MilitaryBaseDescription.txt");
        if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0, "info", file.errorString());
        QTextStream in(&file);
        ui->dialogueBox->setText(in.readAll());
        location++; //location = 5, ie Military Base
    }


}
