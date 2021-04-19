/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameOver
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gameOver)
    {
        if (gameOver->objectName().isEmpty())
            gameOver->setObjectName(QString::fromUtf8("gameOver"));
        gameOver->resize(500, 500);
        centralwidget = new QWidget(gameOver);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, -10, 211, 131));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(100, 100, 311, 311));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 420, 371, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 20, 93, 28));
        gameOver->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gameOver);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 26));
        gameOver->setMenuBar(menubar);
        statusbar = new QStatusBar(gameOver);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gameOver->setStatusBar(statusbar);

        retranslateUi(gameOver);

        QMetaObject::connectSlotsByName(gameOver);
    } // setupUi

    void retranslateUi(QMainWindow *gameOver)
    {
        gameOver->setWindowTitle(QCoreApplication::translate("gameOver", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("gameOver", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline;\">GAME OVER!</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("gameOver", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/prefix1/Images/unsplash-stock-image[url=httpsunsplash.comphotosOcb-zFKk8lw].jpg\" width=\"300\" height=\"300\" /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("gameOver", "Here's a free image of a cat to cheer you up :)", nullptr));
        pushButton->setText(QCoreApplication::translate("gameOver", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameOver: public Ui_gameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
