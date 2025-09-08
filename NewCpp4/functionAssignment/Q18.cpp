/*
18. Return the sum of factorials of all digits.
    Example: 145 → 1! + 4! + 5!
*/
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    while(n){
    fact*=n;
    n--;
    }
    return fact;
}

int sumFactAllDigit(int n){
    int sum=0;
    while(n){
        int digit=n%10;
        sum+=factorial(digit);
        n/=10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"enter  number: ";
    cin>>num;
    cout<<sumFactAllDigit(num);
}