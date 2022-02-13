#include<iostream>
using namespace std;
int main(){
    int num = 6;
    int num1 = 5;
    int temp;

    cout<<"Before swap"<<endl;
    cout<<num<<num1<<endl;
    temp = num;
    num = num1;
    num1 = temp;
    cout<<"after swap"<<endl;
    cout<<num<<num1<<endl;
    return 0;
}
