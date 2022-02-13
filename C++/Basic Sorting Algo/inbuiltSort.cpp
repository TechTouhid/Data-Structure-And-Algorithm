#include<bits/stdc++.h> // we can also use this header file to include all the header files
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n); // to sort using bubble sort
    for(int i = 0; i<n; i++){
       cout<<a[i]<<" ";
    }
    return 0;
}