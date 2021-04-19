QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gameover.cpp \
    gamestart.cpp \
    infoandhelp.cpp \
    main.cpp \
    mainwindow.cpp \
    settings.cpp

HEADERS += \
    gameover.h \
    gamestart.h \
    infoandhelp.h \
    mainwindow.h \
    settings.h

FORMS += \
    gameover.ui \
    gamestart.ui \
    infoandhelp.ui \
    mainwindow.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    textFile.qrc

DISTFILES += \
    Images/map.jpg