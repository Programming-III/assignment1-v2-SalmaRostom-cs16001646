#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student:class Person{
    private:
        int yearLevel;
        string major;
    public:
        void Student(int y=0;string m="",string namePerson="",int idPerson=0):class Person(namePerson,idPerson);
        void display();
};
#endif






