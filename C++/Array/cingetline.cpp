#include<iostream>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter your name."<<endl;
    // we can use cin.getline() insted of cin to prevent 
    // problems with space, tab, newline, third paramiter is optional
    cin.getline(name, 100); // cin.getline(name, 100, '\n'); 
    cout<<"Your name is "<<name;
}