#include "server.h"

Server::Server()
{

}

void Server::connect()
{
    initDbConnection();
}

QSqlTableModel &Server::getStudents(QObject *parent)
{
    QSqlTableModel *tableModel = new QSqlTableModel(parent);
    tableModel->setTable("Students");
    return *tableModel;
}

void Server::createStudent(Student st)
{
    dbManager->createStudent(st);
}

void Server::updateStudent(Student st)
{
    dbManager->updateStudent(st);
}

void Server::deleteStudent(int id)
{
    dbManager->deleteStudent(id);
}

void Server::initDbConnection()
{
    DbManager::init();

    dbManager = &DbManager::getInstance();
    dbManager->openConnection();
}
