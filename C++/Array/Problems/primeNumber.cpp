#include<iostream>
using namespace std;
int main(){
    int n; 
    bool isPrime = true;
    cout<<"Enter a Positive Integer number."<<endl;
    cin>>n;

    // 0 and 1 are not prime 
    if (n == 0 || n == 1){
        isPrime = false;
    }else{
            for (int i = 2; i<=n/2; ++i){
                if(n % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }
    if (isPrime)
        cout<< n << " is a prime number.";
    else
        cout<< n << " is not a prime number.";
    return 0;
}