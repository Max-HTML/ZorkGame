#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "gamestart.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
     MainWindow::close(); //closes intial window
     gamestart = new gameStart(this);
     gamestart->show();
     gamestart->setAttribute(Qt::WA_DeleteOnClose); //Memory management

}
