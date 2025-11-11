#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:class Person{
    private:
        string department;
        int experienceYears;
    public:
        void Instructor(string d="",int y=0,string namePerson="",int idPerson=0):class Person(namePerson,idPerson) ;
        void display();
        ~Instructor();
};
#endif
