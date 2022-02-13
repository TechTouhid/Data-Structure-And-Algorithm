#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> *vp = new vector<int>(); // dinamic vector should delete manually
    vector <int> v; // static vector will be deleted automatically
    vector <int> v2(10, -2); // we can give size and filled value if want
    // we need push_back function to add any element in the vector memory
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // we can also use index to access the element in vector
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    // we can also use vector.at() function
    cout<<v.at(2)<<endl;
    cout<<v.at(3)<<endl;
    // we can also use for loop to get the elements
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.capacity(); // to know how many element we can store in the current capacity
    // if we want to sort we can use
    // sort(v.begin(), v.end());
    return 0;
}