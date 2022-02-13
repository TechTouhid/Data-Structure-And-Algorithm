#include<iostream>
using namespace std;
void optimizeBubbleSort(int list[], int n){
    for(int count=0; count<=n-1; count++){
        bool flag = false;
        for(int i=0; i<=n-2; i++){
            if(list[i] > list[i+1]){
                swap(list[i], list[i+1]);
                flag = true;
            }
        }
        if(flag == false){  //  if the array is already sorted
                cout<<count<<" sorted "<<endl;
                break;
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
    optimizeBubbleSort(list, n);
    for(int i = 0; i<n; i++){
        cout<<list[i]<<" ";
    }
    return 0;
}