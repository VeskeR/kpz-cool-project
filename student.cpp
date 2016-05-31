#include "student.h"

Student::Student(QString firstName, QString lastName, QString email, QString phone, QString department, QString group, int year)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phone = phone;
    this->department = department;
    this->group = group;
    this->year = year;
}


Student::Student(int id, QString firstName, QString lastName, QString email, QString phone, QString department, QString group, int year)
{
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->phone = phone;
    this->department = department;
    this->group = group;
    this->year = year;
}

Student Student::createStudent(QSqlRecord record)
{
    Student st(record.field("ID").value().toInt(), record.field("FirstName").value().toString(), record.field("LastName").value().toString(), record.field("Email").value().toString(), record.field("Phone").value().toString(), record.field("Department").value().toString(), record.field("Group").value().toString(), record.field("Year").value().toInt());
    return st;
}
