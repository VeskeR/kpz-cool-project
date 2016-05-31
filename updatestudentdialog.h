#ifndef UPDATESTUDENTDIALOG_H
#define UPDATESTUDENTDIALOG_H

#include <QDialog>

#include "student.h"
#include "dbmanager.h"
#include "server.h"

namespace Ui {
class UpdateStudentDialog;
}

class UpdateStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateStudentDialog(QWidget *parent = 0, Student st = Student(1, "", "", "", "", "", "", 1), Server *server = 0);
    ~UpdateStudentDialog();

private slots:
    void on_pbUpdate_clicked();

    void on_pbCancel_clicked();

private:
    Ui::UpdateStudentDialog *ui;
    Server *server;
    int stId;
};

#endif // UPDATESTUDENTDIALOG_H
