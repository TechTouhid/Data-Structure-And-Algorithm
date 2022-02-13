// method 1
#include<iostream>
using namespace std;
int main(){
    int a=5, b=7;
    cout << "before swap"<<a<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout << "after swap"<<a<<b<<endl;
    return 0;
}

/* 
// method 2
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
*/