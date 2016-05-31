#ifndef SELECTFILTERDIALOG_H
#define SELECTFILTERDIALOG_H

#include <QDialog>
#include <iostream>
#include <vector>

namespace Ui {
class SelectFilterDialog;
}

class SelectFilterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SelectFilterDialog(QWidget *parent = 0, std::vector<QString> *filters = 0);
    ~SelectFilterDialog();

private slots:
    void on_pbApplyFilter_clicked();

    void on_pbCancel_clicked();

private:
    Ui::SelectFilterDialog *ui;
    std::vector<QString> *filters;
};

#endif // SELECTFILTERDIALOG_H
