#include "updatestudentdialog.h"
#include "ui_updatestudentdialog.h"

UpdateStudentDialog::UpdateStudentDialog(QWidget *parent, Student st) :
    QDialog(parent),
    ui(new Ui::UpdateStudentDialog)
{
    ui->setupUi(this);

    dbManager = &DbManager::getInstance();
    stId = st.id;
    ui->leFirstName->setText(st.firstName);
    ui->leLastName->setText(st.lastName);
    ui->leEmail->setText(st.email);
    ui->lePhone->setText(st.phone);
    ui->leDepartment->setText(st.department);
    ui->leGroup->setText(st.group);
    ui->cbYear->setCurrentText(QString::number(st.year));
}

UpdateStudentDialog::~UpdateStudentDialog()
{
    delete ui;
}

void UpdateStudentDialog::on_pbUpdate_clicked()
{
    Student st(stId, ui->leFirstName->text(), ui->leLastName->text(), ui->leEmail->text(), ui->lePhone->text(), ui->leDepartment->text(), ui->leGroup->text(), ui->cbYear->currentText().toInt());
    dbManager->updateStudent(st);
    this->close();
}

void UpdateStudentDialog::on_pbCancel_clicked()
{
    this->close();
}
