#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Before Reverse"<<endl;
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int start = 0;
    int end = n-1;
    while(start <= end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
    cout<<"After Reverse"<<endl;
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    cout<<endl;
}