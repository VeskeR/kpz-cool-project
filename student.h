#ifndef STUDENT_H
#define STUDENT_H

#include <QtCore>
#include <QtSql>

class Student
{
public:
    Student(QString firstName, QString lastName, QString email, QString phone, QString department, QString group, int year);
    Student(int id, QString firstName, QString lastName, QString email, QString phone, QString department, QString group, int year);
    int id;
    QString firstName;
    QString lastName;
    QString email;
    QString phone;
    QString department;
    QString group;
    int year;
    static Student createStudent(QSqlRecord record);
};

#endif // STUDENT_H
