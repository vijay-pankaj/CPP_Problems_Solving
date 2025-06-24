/*
12. Check Odd or Even Digits Count: Write a function that counts how many digits in a number are odd or even.
Input: 2468
Output: Even digits count: 4
*/
#include<bits/stdc++.h>
using namespace std;

int countOdd(int n){
    int odd=0;
    while(n){
        int rem=n%10;
        if(rem%2==1){
            odd++;
        }
        n/=10;
    }
    return odd;
}

int countEven(int n){
    int even=0;
    while(n){
        if(n%2==0){
            even++;
        }
        n/=10;
    }
    return even;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"In Given number Even Digits are: "<<countEven(n)<<endl;
    cout<<"In Given number Odd Digits are:  "<<countOdd(n)<<endl;
}
