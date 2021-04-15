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

private:
    Ui::gameStart *ui;
    settings *settings1; //point object
    infoandhelp *infoandhelp1; //point object
};

#endif // GAMESTART_H
