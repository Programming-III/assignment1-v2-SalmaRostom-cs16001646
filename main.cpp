#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
void Person::Person(string n,int i){
    name=n;
    id=i;
}
void Person::Person(){
    name="";
    id=0;
}
void Person::display(){
    cout<<"Person Info: "<<endln;
    cout<<"Name: "<<name<<endln;
    cout<<"ID: "<<id<<endln;
}
~Person(){
}

// ==================== Student Class Implementation ====================
void Student::Student(int y;string m,string namePerson,int idPerson):class Person(namePerson,idPerson){
    yearLevel=y;
    major=m;
    name=namePerson;
    id=idPerson;
}
void Student::Student():class Person(){
    yearLevel=0;
    major="";
    name="";
    id=0;
}
void Student::display(){
   cout<<"Student Info: "<<endln;
    cout<<"Name : "<<namePerson<<endln;
    cout<<"Year level: "<<yearLevel<<endln;
    cout<<"Major: "<<major<<endln;
}
~Student(){
}

// ==================== Instructor Class Implementation ====================
void Instructor::Instructor(string d,int y,string namePerson,int idPerson):class Person(namePerson,idPerson){
    department=d;
    experienceYears=y;
    name=namePerson;
    id=idPerson;
}
void Instructor::Instructor():class Person(){
    department="";
    experienceYears=0;
    name="";
    id=0;
}
void Instructor::display(){
    cout<<"Instructor Info: "<<endln;
   cout<<"Name : "<<namePerson<<endln;
    cout<<"Department: "<<department<<endln;
    cout<<"Experience Years: "<<experienceYears<<endln;
}
~Instructor(){
}

// ==================== Course Class Implementation ====================
void Course::Course(string c=,string n,int m,Student* s,int cs,int yearLevelStudent,string majorStudent);class Student(yearLevelStudent,majorStudent){
    courseCode=c;
    courseName=n;
    maxStudents=m;
    students=s;
    currentStudents=cs;
    yearLevel=yearLevelStudent;
    major=majorStudent;
}
void Course::Course():Student(){
    courseCode="";
    courseName="";
    maxStudents=0;
    students=NULL;
    currentStudents=0;
    yearLevel=0;
    major="";
}
void Course::addStudent(const Student& s){
    if(currentStudents+1<maxStudents){
        Array a=new Array(currentStudents+1);
    for(int i=0;i<currentStudents;i++){
        students[i]==a[i];
    }
    a[currentStudents]==s;
    students=a;
    a=students;
    delete [] a;
    }
    else
        return;
}

void Course::displayCourseInfo(){
    cout<<"Course Info: "<<endln;
    cout<<"Course Code: "<<courseCode<<endln;
    cout<<"Course Name: "<<courseName<<endln;
    cout<<"Max Students: "<<maxStudents<<endln;
    cout<<"Current Students: "<<currentStudents<<endln;
     cout<<"Students: "<<endln;
    for(int i=0;i<currentStudents;i++){
         cout<<students[i]<<endln;
    }
}
~Course(){
   delete [] students;
}

// ==================== Main Function ====================
int main() {
   Person p=("Omar Nabil",16645);
   Student s=(3,"cs"):
   Instructor i=("cs",6);
   Course c=("4568","cs",30,&s,14);

   c.addStudent(s);
   s.display();
   i.display();
   c.displayCourseInfo();
   
   
    return 0;
}
