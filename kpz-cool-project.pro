#-------------------------------------------------
#
# Project created by QtCreator 2016-05-31T17:18:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kpz-cool-project
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aboutdialog.cpp \
    dbmanager.cpp \
    student.cpp \
    createstudentdialog.cpp \
    updatestudentdialog.cpp

HEADERS  += mainwindow.h \
    aboutdialog.h \
    dbmanager.h \
    student.h \
    createstudentdialog.h \
    updatestudentdialog.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    createstudentdialog.ui \
    updatestudentdialog.ui

DISTFILES += \
    me.jpg

RESOURCES += \
    aboutimage.qrc
