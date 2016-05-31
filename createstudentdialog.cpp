#include "createstudentdialog.h"
#include "ui_createstudentdialog.h"

CreateStudentDialog::CreateStudentDialog(QWidget *parent, Server *server) :
    QDialog(parent),
    ui(new Ui::CreateStudentDialog)
{
    ui->setupUi(this);

    this->server = server;
}

CreateStudentDialog::~CreateStudentDialog()
{
    delete ui;
}

void CreateStudentDialog::on_pbCreate_clicked()
{
    Student st(ui->leFirstName->text(), ui->leLastName->text(), ui->leEmail->text(), ui->lePhone->text(), ui->leDepartment->text(), ui->leGroup->text(), ui->cbYear->currentText().toInt());
    server->createStudent(st);
    this->close();
}

void CreateStudentDialog::on_pbCancel_clicked()
{
    this->close();
}
