#-------------------------------------------------
#
# Project created by QtCreator 2016-05-31T17:18:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kpz-cool-project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aboutdialog.cpp

HEADERS  += mainwindow.h \
    aboutdialog.h

FORMS    += mainwindow.ui \
    aboutdialog.ui

DISTFILES += \
    me.jpg

RESOURCES += \
    aboutimage.qrc
