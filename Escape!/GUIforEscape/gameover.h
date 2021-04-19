#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QMainWindow>

namespace Ui {
class gameOver;
}

class gameOver : public QMainWindow
{
    Q_OBJECT

public:
    explicit gameOver(QWidget *parent = nullptr);
    ~gameOver();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gameOver *ui;
};

#endif // GAMEOVER_H
