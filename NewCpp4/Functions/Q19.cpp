/*
4. Sum of Digits: Write a function that calculates the sum of digits of a number.
Input: 123
Output: Sum of digits: 6
*/
#include<bits/stdc++.h>
using namespace std;
int sumOFdigit(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sumOFdigit(n);
}