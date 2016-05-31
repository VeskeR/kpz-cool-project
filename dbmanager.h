#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QtCore>
#include <QtGui>
#include <QMainWindow>
#include <QDebug>
#include <QtSql>

#include <student.h>

class DbManager
{
public:
    DbManager();
    static void init();
    static DbManager &getInstance();
    QSqlDatabase db;
    void openConnection();
    void createStudent(Student student);
    void updateStudent(Student student);
    void deleteStudent(int id);
private:
    static DbManager *instance;
};

#endif // DBMANAGER_H
