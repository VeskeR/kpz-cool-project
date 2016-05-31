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
    updatestudentdialog.cpp \
    server.cpp \
    selectfilterdialog.cpp

HEADERS  += mainwindow.h \
    aboutdialog.h \
    dbmanager.h \
    student.h \
    createstudentdialog.h \
    updatestudentdialog.h \
    server.h \
    selectfilterdialog.h

FORMS    += mainwindow.ui \
    aboutdialog.ui \
    createstudentdialog.ui \
    updatestudentdialog.ui \
    selectfilterdialog.ui

DISTFILES += \
    me.jpg

RESOURCES += \
    aboutimage.qrc
