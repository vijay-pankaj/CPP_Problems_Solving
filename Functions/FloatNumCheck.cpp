//  Write a C++ function that takes a fl oat as input and uses nested if-else statements to determine
//  if the number is positive, negative, or zero, and whether it is a whole number or a fraction.
#include<bits/stdc++.h>
using namespace std;

string floatNUmCheck(float num){
    if((num>0)&&(floor(num)==num)){
        return "given number is positive and whole number";
    }else if((num<0)&&floor(num)==num){
        return "given number is negative and it's whole number";
    }else if((num<0)&&floor(num)!=num){
        return "given number is negative and it's fractional number";
    }else if(num==0){
        return "given number is zero its also a whole number";
    }
    else{
        return "given number is positive and it's fractional number";
    }
}

int main(){
    float num;
    cout<<"enter number: ";
    cin>>num;
    cout<<floatNUmCheck(num);
}
