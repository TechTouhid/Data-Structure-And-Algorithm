#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100], str2[100];

    cin>>str1>>str2;
    // cout<<strlen(str1); // to get string length
    string value = strcmp(str1, str2) == 0 ? "equal" : "not equal";
    cout<<value<<endl;
}