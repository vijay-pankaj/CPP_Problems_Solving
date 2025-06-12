/*
20. Absolute Value :

Input : 8
Output : 8

Input: -15
Output: 15

Input: -4.5
Output: 4.5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    float n;
    cout<<"Enter number: ";
    cin>>n;


    //first
    // if(n<0)cout<<-(n);
    // else cout<<n;


    //second
    float absoluteValue=(n>0)?n:-(n);
    cout<<absoluteValue;
}