/*
12. Character Case :

Input: A
Output: Uppercase

Input: m
Output: Lowercase
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter number: ";
    cin>>ch;

    //first
    if(ch>='a'&&ch<='z')cout<<"lowerCase";
    if(ch>='A'&&ch<='Z')cout<<"UpperCase";

    //second
    // string charCheck = (ch>='a'&&ch<='z')?"LowerCase":"UpperCase";
    // cout<<charCheck;
}