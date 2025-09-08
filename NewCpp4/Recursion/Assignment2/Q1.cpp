/*
1. Find the Greatest Common Divisor (GCD) :
-> Task: Write a recursive function to calculate the GCD of two numbers.
*/
#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}

int main(){
    int n1,n2;
    cout<<"enter two num: ";
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
}