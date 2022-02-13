#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];

    int sum = 0;
    // Iterating over the array
    for (int i = 0; i<n; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<endl<<sum;

    return 0;
}