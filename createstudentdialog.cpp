#include "createstudentdialog.h"
#include "ui_createstudentdialog.h"

CreateStudentDialog::CreateStudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateStudentDialog)
{
    ui->setupUi(this);

    dbManager = &DbManager::getInstance();
}

CreateStudentDialog::~CreateStudentDialog()
{
    delete ui;
}

void CreateStudentDialog::on_pbCreate_clicked()
{
    Student st(ui->leFirstName->text(), ui->leLastName->text(), ui->leEmail->text(), ui->lePhone->text(), ui->leDepartment->text(), ui->leGroup->text(), ui->cbYear->currentText().toInt());
    dbManager->createStudent(st);
    this->close();
}

void CreateStudentDialog::on_pbCancel_clicked()
{
    this->close();
}
