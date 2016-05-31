#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DbManager::init();

    dbManager = &DbManager::getInstance();
    dbManager->openConnection();

    db = dbManager->db;

    model = new QSqlTableModel(this);
    model->setTable("Students");
    model->select();

    ui->tableView->setModel(model);

//    setCentralWidget(ui->tableView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    aboutDialog = new AboutDialog(this);
    aboutDialog->show();
}

void MainWindow::on_actionCreate_Student_triggered()
{
    createStudentDialog = new CreateStudentDialog(this);
    createStudentDialog->setModal(true);
    createStudentDialog->exec();

    model->select();
}

void MainWindow::on_actionUpdate_Student_triggered()
{

}

void MainWindow::on_actionDelete_Student_triggered()
{

}
