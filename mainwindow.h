#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QShortcut>
#include <vector>

#include "aboutdialog.h"
#include "createstudentdialog.h"
#include "updatestudentdialog.h"
#include "selectfilterdialog.h"
#include "dbmanager.h"
#include "server.h"

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
    SelectFilterDialog *selectFilterDialog;

private slots:
    void on_actionAbout_triggered();

    void on_actionCreate_Student_triggered();

    void on_actionUpdate_Student_triggered();

    void on_actionDelete_Student_triggered();

    void on_actionSelect_Filter_triggered();

private:
    Ui::MainWindow *ui;
    Server *server;
    QSqlTableModel *model;
};

#endif // MAINWINDOW_H
