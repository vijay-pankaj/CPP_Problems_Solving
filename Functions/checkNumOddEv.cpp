// Write a C++ function that takes an integer as input and uses nested if-else statements to determine
//  if the number is positive and even, positive and odd, negative and even, or negative and odd.
#include<bits/stdc++.h>
using namespace std;
 string isPositveOdd(int n){
    if(n>0 && n%2==0){
        return "Positive Even";
    }else if(n<0 && n%2==0){
        return "Negative Even";
    }else if(n>0 && n%2!=0){
        return "Positive Odd";
    }else if(n<0 && n%2!=0){
        return "negative odd";
    }else{
        return "number is zero";
    }

 }
 int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Given number is : "<<isPositveOdd(n);
 }