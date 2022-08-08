#include<iostream>
#include<algorithm>
using namespace std;

int binary_search(int a[], int n, int key){
    // define start and end value
    int s = 0, e = n-1;
    while( s <= e){
        // first we need to calculate mid value
        int mid = (s + e) / 2;
        // now we need to compare
        if(a[mid] == key){
            return mid;
        }else if (a[mid] > key) { // the value will be on the right hand side
            e = mid -1;
        }else{ // the value will be on the left hand side
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int a[n];

    // take input in the array using a for loop
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter a key to search ";
    cin >> key;

    // we need to sort the array 
    sort(a, a+n); // bubble sort form build in function
    // print sorted array
     cout << "sorted arrary ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<<"\n";

   int position = binary_search(a, n, key);

   if(position == -1){
    cout << "Key not found";
   }else{
    cout << "Key found at index " << position << " and the value is " << a[position] << endl;
   }


    
    return 0;
}