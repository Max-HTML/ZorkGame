#ifndef INFOANDHELP_H
#define INFOANDHELP_H

#include <QMainWindow>

namespace Ui {
class infoandhelp;
}

class infoandhelp : public QMainWindow
{
    Q_OBJECT

public:
    explicit infoandhelp(QWidget *parent = nullptr);
    ~infoandhelp();

private:
    Ui::infoandhelp *ui;
};

#endif // INFOANDHELP_H
