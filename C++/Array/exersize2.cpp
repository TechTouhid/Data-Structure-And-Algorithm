#include<iostream>
using namespace std;
int main(){
    int x = 25, y=23;
    cout<<"before swap"<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    // swaping logic
    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"after swap"<<endl;
    cout<<"x = "<<x<<" y = "<<y<<endl;
}