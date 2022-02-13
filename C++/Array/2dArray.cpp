#include<iostream>
using namespace std;
int main(){
    int row, column;
    cin>>row>>column;
    int arr[row][column];

    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }

    //output row wise
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
    cout<<"---------------------------------"<<endl;
    //output column wise
    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}