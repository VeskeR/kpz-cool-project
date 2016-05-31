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
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_N), this, SLOT(on_actionCreate_Student_triggered()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_U), this, SLOT(on_actionUpdate_Student_triggered()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_D), this, SLOT(on_actionDelete_Student_triggered()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_I), this, SLOT(on_actionAbout_triggered()));

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
    QModelIndex index = ui->tableView->currentIndex();
    if (index.row() > 0)
    {
        Student st = Student::createStudent(model->record(index.row()));

    }
}

void MainWindow::on_actionDelete_Student_triggered()
{
    QModelIndex index = ui->tableView->currentIndex();
    if (index.row() > 0)
    {
        int id = model->record(index.row()).field("ID").value().toInt();
        dbManager->deleteStudent(id);
        model->select();
        QModelIndex newIndex = model->index(index.row(), index.column());
        ui->tableView->setCurrentIndex(newIndex);
    }
}
