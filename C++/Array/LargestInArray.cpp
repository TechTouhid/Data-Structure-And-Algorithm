#include<iostream>
using namespace std;
int main(){
    int n, largest = INT_MIN, smallest = INT_MAX;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >>arr[i];
    }
    for (int i = 0; i<n; i++){
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    cout<<"The Largest value is : "<<largest<<endl;
    cout<<"The Smallest value is : "<<smallest<<endl;

    return 0;
}