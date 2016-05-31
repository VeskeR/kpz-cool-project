#ifndef SERVER_H
#define SERVER_H

#include <QtCore>
#include <QDebug>
#include <QtSql>

#include "dbmanager.h"
#include "student.h"

class Server
{
public:
    Server();
    void connect();
    QSqlTableModel &getStudents(QObject *parent = 0);
    void createStudent(Student st);
    void updateStudent(Student st);
    void deleteStudent(int id);

private:
    void initDbConnection();
    DbManager *dbManager;
};

#endif // SERVER_H
