#include<iostream>
using namespace std;
    void selectionSort(int list[], int n){
        // this loop will point from first element
        for (int i = 0; i <=n-2; i++)
        {
            int smallest = i; // using index as value
            // this loop will point from second element
            for (int j = i+1; j <=n-1; j++)
            {
               if(list[j] < list[smallest]){
                   smallest = j;
               }
            }
            // now swap the index 
            if(list[i] > list[smallest]){
                swap(list[i], list[smallest]);
            }
            
        }
        
    }
int main(){
    int n;
    cin>>n;
    int list[n];
    for (int i = 0; i <n; i++)
    {
        cin>>list[i];
    }

    selectionSort(list, n);

    for (int i = 0; i <n; i++)
    {
        cout<<list[i]<<" ";
    }

    return 0;
}