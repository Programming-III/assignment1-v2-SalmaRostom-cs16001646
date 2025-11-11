#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor{
    private:
        string department;
        int experienceYears;
    public:
        void Instructor(string d="",int y=0);
        void display();
};
#endif
