#ifndef GAMESTART_H
#define GAMESTART_H

#include <QMainWindow>
#include "infoandhelp.h"
#include "settings.h"


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

private:
    int location;
    Ui::gameStart *ui;
    settings *settings1; //point object
    infoandhelp *infoandhelp1; //point object
};

#endif // GAMESTART_H
