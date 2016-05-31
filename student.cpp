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
