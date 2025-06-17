/*
3. Check Prime Number: Write a function that checks if a number is prime.
Input: 7
Output: Prime
*/

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
for(int i=2; i<n; i++){
     if(n%i==0)return false;
}
return true;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPrime(n))cout<<"Prime";
    else cout<<"Not Prime";
}