#include "selectfilterdialog.h"
#include "ui_selectfilterdialog.h"

SelectFilterDialog::SelectFilterDialog(QWidget *parent, std::vector<QString> *filters) :
    QDialog(parent),
    ui(new Ui::SelectFilterDialog)
{
    ui->setupUi(this);
    this->filters = filters;
}

SelectFilterDialog::~SelectFilterDialog()
{
    delete ui;
}

void SelectFilterDialog::on_pbApplyFilter_clicked()
{
    if (ui->leId->text().length() > 0)
    {
        this->filters->push_back("ID='" + ui->leId->text() + "'");
    }
    if (ui->leFirstName->text().length() > 0)
    {
        this->filters->push_back("FirstName='" + ui->leFirstName->text() + "'");
    }
    if (ui->leLastName->text().length() > 0)
    {
        this->filters->push_back("LastName='" + ui->leLastName->text() + "'");
    }
    if (ui->leEmail->text().length() > 0)
    {
        this->filters->push_back("Email='" + ui->leEmail->text() + "'");
    }
    if (ui->lePhone->text().length() > 0)
    {
        this->filters->push_back("Phone='" + ui->lePhone->text() + "'");
    }
    if (ui->leDepartment->text().length() > 0)
    {
        this->filters->push_back("Department='" + ui->leDepartment->text() + "'");
    }
    if (ui->leGroup->text().length() > 0)
    {
        this->filters->push_back("Group='" + ui->leGroup->text() + "'");
    }
    if (ui->cbYear->currentText().length() > 0)
    {
        this->filters->push_back("Year='" + ui->cbYear->currentText() + "'");
    }
    this->close();
}

void SelectFilterDialog::on_pbCancel_clicked()
{
    this->close();
}
