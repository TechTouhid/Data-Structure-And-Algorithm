#include<iostream>
#include<cstring>
using namespace std;
    void printPrefix(char str[]){
        for(int end = 0; str[end] != '\0'; end++ ){
            for(int start = 0; start<=end; start++){
                cout<<str[start];
            }
            cout<<endl;
        }
    }

    void printSuffix(char str[]){
    for(int end = strlen(str) - 1; str[end] != '\0'; end-- ){
        for(int start = end; start>=0; start--){
            cout<<str[start];
        }
        cout<<endl;
    }
    }
int main(){
    char str[10];
    cin>>str;
    // printPrefix(str);
    printSuffix(str);
    
    return 0;
}