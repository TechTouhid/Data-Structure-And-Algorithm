#include<iostream>
using namespace std;
int main(){
    int n; 
    int largest = INT_MIN, smallest = INT_MAX;
    cout<<"How many element you want in the array! "<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
        for(int i = 0; i<n; i++){
        cout<<arr[i];
    }


    return 0;
}