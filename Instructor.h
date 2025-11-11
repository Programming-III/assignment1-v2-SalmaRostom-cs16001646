#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:class Person{
    private:
        string department;
        int experienceYears;
    public:
        void Instructor(string d,int y,string namePerson,int idPerson):class Person(namePerson,idPerson) ;
        void Instructor():class Person() ;
        void display();
        ~Instructor();
};
#endif
