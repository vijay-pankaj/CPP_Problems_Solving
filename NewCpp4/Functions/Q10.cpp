/*
10. Check Palindrome Number: Write a function that checks if a given number is a palindrome.
Input: 12321
Output: Palindrome
*/
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int original=n,rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return original==rev; 
}

int main(){
    int number;
    cout<<"enter number: ";
    cin>>number;
    
    if(isPalindrome(number))cout<<"Palindrome";
    else cout<<"Not Palindrome";
}