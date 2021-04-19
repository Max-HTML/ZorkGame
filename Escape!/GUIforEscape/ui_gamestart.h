/********************************************************************************
** Form generated from reading UI file 'gamestart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESTART_H
#define UI_GAMESTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameStart
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLCDNumber *timer;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QTextBrowser *dialogueBox;
    QTextBrowser *textBrowser_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gameStart)
    {
        if (gameStart->objectName().isEmpty())
            gameStart->setObjectName(QString::fromUtf8("gameStart"));
        gameStart->resize(991, 600);
        centralwidget = new QWidget(gameStart);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(210, 420, 391, 102));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 280, 131, 23));
        progressBar->setValue(24);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 400, 131, 121));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 380, 55, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 260, 55, 16));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 40, 93, 28));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 10, 93, 28));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(870, 10, 93, 28));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(730, 420, 160, 100));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(verticalLayoutWidget_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_5->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(verticalLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_5->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(verticalLayoutWidget_2);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        verticalLayout_5->addWidget(pushButton_10);

        timer = new QLCDNumber(centralwidget);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(20, 220, 131, 23));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 200, 55, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 340, 131, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 320, 91, 20));
        dialogueBox = new QTextBrowser(centralwidget);
        dialogueBox->setObjectName(QString::fromUtf8("dialogueBox"));
        dialogueBox->setGeometry(QRect(210, 60, 389, 320));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(620, 60, 350, 320));
        gameStart->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gameStart);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 991, 26));
        gameStart->setMenuBar(menubar);
        statusbar = new QStatusBar(gameStart);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gameStart->setStatusBar(statusbar);

        retranslateUi(gameStart);

        QMetaObject::connectSlotsByName(gameStart);
    } // setupUi

    void retranslateUi(QMainWindow *gameStart)
    {
        gameStart->setWindowTitle(QCoreApplication::translate("gameStart", "ESCAPE!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gameStart", "Go North", nullptr));
        pushButton_4->setText(QCoreApplication::translate("gameStart", "Go West", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gameStart", "Go East", nullptr));
        pushButton->setText(QCoreApplication::translate("gameStart", "Go South", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("gameStart", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("gameStart", "Inventory", nullptr));
        label_2->setText(QCoreApplication::translate("gameStart", "Health", nullptr));
        pushButton_5->setText(QCoreApplication::translate("gameStart", "Settings", nullptr));
        pushButton_6->setText(QCoreApplication::translate("gameStart", "Info/Help", nullptr));
        pushButton_7->setText(QCoreApplication::translate("gameStart", "QUIT", nullptr));
        pushButton_8->setText(QCoreApplication::translate("gameStart", "Option 1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("gameStart", "Option 2", nullptr));
        pushButton_10->setText(QCoreApplication::translate("gameStart", "Option 3", nullptr));
        label_5->setText(QCoreApplication::translate("gameStart", "Timer(s)", nullptr));
        label_6->setText(QCoreApplication::translate("gameStart", "Item Equipped", nullptr));
        dialogueBox->setHtml(QCoreApplication::translate("gameStart", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">LOCATION: &quot;Prison&quot;</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">DESCRIPTION:</span><span style=\" font-size:8pt; font-weight:600;\"> </span><span style=\" font-size:8pt;\">&quot;You wake up in a dusty cell, you look around, all you can see is a dim light coming from the sou"
                        "th.&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">OPTIONS:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1. &quot;Fight Guard.&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">2. &quot;Sneak out.&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">3. &quot;Wait in your cell for eternity.&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">OPTIONAL PATHS:</span><span style=\" font-size:8pt; font-weight:600;\"> &quot;</span><span style=\" font-size:8pt;\">South&quot;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("gameStart", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/new/prefix1/Images/map.jpg\" /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameStart: public Ui_gameStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESTART_H
