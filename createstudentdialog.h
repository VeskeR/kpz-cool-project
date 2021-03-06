#ifndef CREATESTUDENTDIALOG_H
#define CREATESTUDENTDIALOG_H

#include <QDialog>

#include <student.h>
#include <dbmanager.h>
#include "server.h"

namespace Ui {
class CreateStudentDialog;
}

class CreateStudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateStudentDialog(QWidget *parent = 0, Server *server = 0);
    ~CreateStudentDialog();

private slots:
    void on_pbCreate_clicked();

    void on_pbCancel_clicked();

private:
    Ui::CreateStudentDialog *ui;
    Server *server;
};

#endif // CREATESTUDENTDIALOG_H
