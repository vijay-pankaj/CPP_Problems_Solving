/*
2. Positive, Negative, or Zero :

Input: 0
Output: Zero

Input: -15
Output: Negative

Input: 25
Output: Positive

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    //first
    // if(n!=0){
    //     if(n>0){
    //         cout<<"positive";
    //     }else{
    //         cout<<"Negative";
    //     }
    // }else{
    //     cout<<"Zero";
    // }


    //second
    // string str=(n!=0)?((n>0)?"positive":"negative"):"Negative";
    // cout<<str;

    //third
    if(n>0)cout<<"positive";
    if(n<0)cout<<"Negative";
    if(n==0)cout<<"Zero";
}