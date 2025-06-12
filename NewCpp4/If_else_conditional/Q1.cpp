/*1. Odd or Even :

Input: 7
Output: Odd

Input: 8
Output: Even*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    //first
    // if(n%2==0){
    //     cout<<"Even";
    // }else{
    //     cout<<"odd";
    // }


    // second
    string str=(n%2==0)? "Even":"Odd";
    cout<<str;


    //third
    // if(n%2==1){
    //     cout<<"odd";
    // }else{
    //     cout<<"Even";
    // }
}