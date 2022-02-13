#include<iostream>
#include<cstring>
using namespace std;
class Student{
    int age;
    

    public:
    char *name; // character type pointer
    // when we use dinamic object we have to make 
    // out own copy constructor function
        Student(Student const &s){  // we only need to pass the reference not the value
            this-> age = s.age;
            // code for deep copy
            this->name = new char[strlen(s.name) + 1];
            strcpy(this->name, s.name);
        }
        Student(int age, char *name){
            this->age = age;
            // this->name = name; // shallow copy
            this->name = new char[strlen(name) + 1];
            // then copy the string
            strcpy(this->name, name);
        }
        void display(){
            cout<<name<<" "<<age<<endl;
        }
};
int main(){
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();
    // // make some change in the object 
    // name[3] = 'e';
    // Student s2(25, name);

    // for copy cons
    Student s2(s1);
    s2.name[0]='x';
    s2.display();
    
    s1.display();
    return 0;
}