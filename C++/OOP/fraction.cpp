#include<iostream>
using namespace std;
class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        void print(){
            cout<<numerator << " / " <<denominator<<endl;
        }

        // constructor
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        // add both fractions
        // to avoid copy constractor we will use dinamic reference
        // and make the object const to remove write permission
        void add(Fraction const &f2){  
            int lcm = denominator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;
            int num = x * numerator + y * f2.numerator;

            // store result 
            this->numerator = num;
            this->denominator = lcm;
            // simplify
            simplify();
        }
        // simplify
        void simplify(){
            // to simplify we need to know the common greatest divisor gcd
            int gcd = 1;
            int j = min(numerator, denominator);
            for(int i = 1; i<=j; i++){
                if (numerator % i == 0 && denominator % i == 0){
                    gcd = i;
                }
            }
            // another way to get gcd (builtin funcion)
            // gcd = __gcd(numerator, denominator);
            numerator  = numerator / gcd;
            denominator = denominator / gcd;
        }
        // operator overload
        Fraction operator+(Fraction const &f2) const{  
            int lcm = denominator * f2.denominator;
            int x = lcm / this->denominator;
            int y = lcm / f2.denominator;
            int num = x * numerator + y * f2.numerator;

            Fraction newFraction(num, lcm);

            // simplify need to call on new object
            newFraction.simplify();
            return newFraction;
        }
};
int main(){
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    
    // f1.add(f2); // to call add function
    Fraction f3 = f1 + f2;
    f1.print();
    f2.print();
    f3.print();
    return 0;
}