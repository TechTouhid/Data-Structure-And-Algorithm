#include<iostream>
using namespace std;

// linear search is a O(n) time complexity 
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;

    int pos = linearSearch(arr, n, key);
    if (pos == -1){
        cout<<"Key Not Found"<<endl;
    }else{
        cout<<"Key Found at index "<<pos<< " which is "<< arr[pos]<<endl;
    }
    return 0;
}