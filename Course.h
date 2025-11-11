#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course:class Student{
    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;
        int currentStudents;
    public:
        void Course(string c="",sting n="",int m=0,Student* s=NULL,int cs=0);
        void addStudent(const Student& s);
        void displayCourseInfo();
};
#endif
