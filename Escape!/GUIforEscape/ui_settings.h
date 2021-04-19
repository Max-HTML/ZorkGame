/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(800, 400);
        centralwidget = new QWidget(settings);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 591, 311));
        settings->setCentralWidget(centralwidget);
        menubar = new QMenuBar(settings);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        settings->setMenuBar(menubar);
        statusbar = new QStatusBar(settings);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        settings->setStatusBar(statusbar);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QMainWindow *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Settings", nullptr));
        label->setText(QCoreApplication::translate("settings", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">We lied, there is no settings.</span></p><p align=\"center\"><span style=\" font-size:18pt;\">:(</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
