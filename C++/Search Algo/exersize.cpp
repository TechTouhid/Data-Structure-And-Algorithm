#include<iostream>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i<=n-2; i++){
        int index = i;
        for(int j = i+1; j<=n-1; j++){
            if(a[j] < a[index]){
                index = j;
                // cout<<"index";
            }
        }
        if (a[i] > a[index]){
            swap(a[i], a[index]);
        }
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    selectionSort(arr, n);
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}