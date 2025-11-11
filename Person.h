#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
    private:
        string name;
        int id;
    public:
        void Person(string n,int i);
        void Person();
        void display();
        ~Person();
};
#endif













