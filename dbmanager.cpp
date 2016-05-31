#include "dbmanager.h"

DbManager *DbManager::instance;

DbManager::DbManager()
{

}

void DbManager::init()
{
    instance = new DbManager();
}

DbManager& DbManager::getInstance()
{
    return *instance;
}

void DbManager::openConnection()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/andrey/Documents/sqlite/kpzcoolprojectdb.db");
    // MySQL password: #FMsd=e<C2K=
    if (db.open())
    {
        qDebug() << "Connection to SQLite successfully opened";
    }
    else
    {
        qDebug() << "Error connecting to SQLite: " << db.lastError().text();
    }
}

void DbManager::createStudent(Student student)
{
    QString sQuery = "INSERT INTO `Students`(`FirstName`,`LastName`,`Email`,`Phone`,`Department`,`Group`,`Year`) VALUES (:firstName,:lastName,:email,:phone,:department,:group,:year);";
    QSqlQuery qry;
    qry.prepare(sQuery);

    qry.bindValue(":firstName", student.firstName);
    qry.bindValue(":lastName", student.lastName);
    qry.bindValue(":email", student.email);
    qry.bindValue(":phone", student.phone);
    qry.bindValue(":department", student.department);
    qry.bindValue(":group", student.group);
    qry.bindValue(":year", student.year);

    if (qry.exec())
    {
        qDebug() << "Successfully created new student";
    }
    else
    {
        qDebug() << "Error creating new student: " << db.lastError().text();
    }
}

void DbManager::updateStudent(Student student)
{

}

void DbManager::deleteStudent(int id)
{
    QString sQuery = "DELETE FROM `Students` WHERE `_rowid_`=:id;";
    QSqlQuery qry;
    qry.prepare(sQuery);

    qry.bindValue(":id", id);

    if (qry.exec())
    {
        qDebug() << "Successfully deleted student with id: " << id;
    }
    else
    {
        qDebug() << "Error deleting student: " << db.lastError().text();
    }

}
