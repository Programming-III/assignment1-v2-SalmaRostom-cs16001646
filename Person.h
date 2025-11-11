#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
    private:
        string name;
        int id;
    public:
    void display();
};
#endif

#include "Person.H"
void Person::display(){
    cout<<"Name: "<<name<<endln;
    cout<<"ID: "<<id<<endln;
}











