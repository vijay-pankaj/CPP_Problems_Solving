/*
10. Print Prime Numbers up to N: Write a function to print all prime numbers up to a given number N.
Input: 10
Output: Prime numbers: 2 3 5 7
*/
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i<n; i++){
        if(n%i==0)return false;
    }
    return true;
}

void nPrimenuber(int n){
    for(int i=2; i<=n; i++){
        if(isprime(i))cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    nPrimenuber(n);
}