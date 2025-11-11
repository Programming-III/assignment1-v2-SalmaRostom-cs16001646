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
        void Course(string c,sting n,int m,Student* s,int cs,int yearLevelStudent,string majorStudent):class Student(yearLevelStudent,majorStudent);
        void Course():Student();
        void addStudent(const Student& s);
        void displayCourseInfo();
        ~Course();
};
#endif
