#-------------------------------------------------
#
# Project created by QtCreator 2019-08-16T17:08:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Resersi1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    mylabel.cpp \
    mywindow.cpp \
    choise1.cpp \
    chiose2.cpp

HEADERS += \
        mainwindow.h \
    mylabel.h \
    mywindow.h \
    choise1.h \
    chiose2.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    image.qrc

DISTFILES += \
    image/bg1.jpg \
    image/bg2.jpg \
    image/board.jpg \
    image/back.png \
    image/back2.png \
    image/black.png \
    image/black2.png \
    image/buttonBK.png \
    image/close.png \
    image/machine.png \
    image/machine2.png \
    image/min.png \
    image/network.png \
    image/network2.png \
    image/white.png \
    image/white2.png \
    image/chess.ico
