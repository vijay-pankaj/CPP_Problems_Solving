/*
11. Find the Range of a Number: Write a function that checks if a number is in a given range (e.g., between 10 and 100).
Input: 50
Output: In the range of 10-100
*/
#include<bits/stdc++.h>
using namespace std;

bool isINRange(int n){
    return (n>=10&&n<=100);
}

int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    if(isINRange(number))cout<<"In range of 10-100";
    else cout<<"Not in range 10-100";
}