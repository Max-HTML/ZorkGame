#ifndef GAMESTART_H
#define GAMESTART_H

#include <QMainWindow>
#include "infoandhelp.h"
#include "settings.h"
#include "gameover.h"


namespace Ui {
class gameStart;
}

class gameStart : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameStart(QWidget *parent = nullptr);
    ~gameStart();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushSouthButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_lcdNumber_overflow();

    void on_pushButton_9_clicked();

    void on_progressBar_valueChanged(int value);

    void on_pushButton_10_clicked();

private:
    int location;
    Ui::gameStart *ui;
    settings *settings1; //point object
    infoandhelp *infoandhelp1; //point object
    gameOver *gameover; //point object
};

#endif // GAMESTART_H
