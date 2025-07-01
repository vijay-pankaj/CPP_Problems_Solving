/*
11. Count Occurrences of a Digit in a Number: Write a function that counts how many times a specific digit appears in a number.
Input: 122333
Output: Occurrences of 3: 3
*/
#include<iostream>
using namespace std;

int countSpecifitNum(int n,int s){
    int count=0;
    while(n){
        int rem=n%10;
        if(rem==s){
            count++;
        }
        n/=10;
    }
    return count;
}

int main(){
    int n,s;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter specific number: ";
    cin>>s;
    cout<<countSpecifitNum(n,s);
}