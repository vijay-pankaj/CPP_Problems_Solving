/*
1. Factorial of a Number :
-> Task: Write a recursive function to find the factorial of a number.
*/
#include<iostream>
using namespace std;

int factorial(int n){
    if(n < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
        return -1;
    }
    if(n == 0 || n == 1)
        return 1;
    return n*factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<factorial(num);
}