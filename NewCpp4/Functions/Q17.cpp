/*
2. Factorial of a Number: Write a function that calculates the factorial of a given number using a loop.
Input: 5
Output: Factorial: 120
*/
#include<bits/stdc++.h>
using  namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter number: " ;
    cin>>n;
    cout<<factorial(n);
    
}