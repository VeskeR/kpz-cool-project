#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QShortcut>

#include "aboutdialog.h"
#include "createstudentdialog.h"
#include "updatestudentdialog.h"
#include "dbmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    AboutDialog *aboutDialog;
    CreateStudentDialog *createStudentDialog;
    UpdateStudentDialog *updateStudentDialog;

private slots:
    void on_actionAbout_triggered();

    void on_actionCreate_Student_triggered();

    void on_actionUpdate_Student_triggered();

    void on_actionDelete_Student_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    DbManager *dbManager;
    QSqlTableModel *model;
};

#endif // MAINWINDOW_H
