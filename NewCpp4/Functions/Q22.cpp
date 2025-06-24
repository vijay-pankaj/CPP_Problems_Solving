/*
7. Reverse a Number: Write a function to reverse the digits of a number.
Input: 1234
Output: Reversed: 4321
*/
#include<bits/stdc++.h>
using namespace std;

int reverseNUm(int n){
    int rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    cout<<reverseNUm(number);
}