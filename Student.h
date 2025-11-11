#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student:class Person{
    private:
        int yearLevel;
        string major;
    public:
        void Student(int y;string m,string namePerson,int idPerson):class Person(namePerson,idPerson);
        void Student():class Person();
        void display();
        ~Student();
};
#endif






