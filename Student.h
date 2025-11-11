#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
class Student{
    private:
        int yearLevel;
        string major;
    public:
        void Student(int y=0;string m="");
        void display();
};
#endif






