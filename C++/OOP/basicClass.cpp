#include<iostream>
#include "StudentClass.cpp"
using namespace std;

int main(){
    Student s;
    s.age = 25;
    cout<<s.age<<endl;

    Student *s1 = new Student;
    (*s1).age = 26;
    cout<<(*s1).age<<endl;
    
    s1->age = 22;
    cout<<s1->age<<endl;

    s1->setRoll(180503104);
    cout<<s1->getRoll()<<endl;


    return 0;
}