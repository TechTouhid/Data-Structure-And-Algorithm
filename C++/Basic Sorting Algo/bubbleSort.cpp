#include<iostream>
using namespace std;
void bubbleSort(int list[], int n){
    for(int count = 0; count<=n-1; count++){
        for(int i = 0; i<=n-2; i++){
            if(list[i] > list[i+1]){
                swap(list[i], list[i+1]); // swap with large number index
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int list[n];
    for(int i = 0; i<n; i++){
        cin>>list[i];
    }

    bubbleSort(list, n);
    
    for(int i = 0; i<n; i++){
        cout<<list[i]<<" ";
    }
    return 0;
}