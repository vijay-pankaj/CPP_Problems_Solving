/*
7. Find Power of a Number: Write a function that calculates the power of a number (x^y) using loops.
Input: 2 3
Output: Result: 8
*/
#include<iostream>
using namespace std;

int powerofNUm(int n,int p){
    int res=1;
    while(p){
        res*=n;
        p--;
    }
    return res;
}

int main(){
    int num,power;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>power;  
    cout<<powerofNUm(num,power);  
}