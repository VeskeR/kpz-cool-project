#ifndef STUDENT_H
#define STUDENT_H

#include <QtCore>

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
};

#endif // STUDENT_H
