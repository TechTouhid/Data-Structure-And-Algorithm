#include<iostream>
using namespace std;
class Student{
    public:
        int age;
        const int rollNumber;
        int &x; // age reference variable and reference variable must be initialize while we crate it
        // to initialize const property
        // can also be used for normal variable
        Student(int r, int age) : rollNumber(r), age(age), x(this->age){

        }
};
int main(){
    Student s1(100, 10);
    // s1.age = 10;
    // s1.rollNumber = 100;
    return 0;
}