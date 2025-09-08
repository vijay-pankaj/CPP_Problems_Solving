/*
21. Find the product of all digits except 0.
    Example: 1023 → 1×2×3 = 6
*/
#include<iostream>
using namespace std;

int prodOfDigitexpZero(int n){
    int product=1;
    while(n){
        int digit=n%10;
        if(digit!=0)product*=digit;
        n/=10;
    }
    return product;
   
}
int main(){
int num=1023;
cout<<prodOfDigitexpZero(num);
}