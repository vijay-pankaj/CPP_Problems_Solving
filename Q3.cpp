// 3.Concatenate two strings Input: "good", "morning" Output: "goodmorning"
#include<bits/stdc++.h>
using namespace std;

string concatenatestrings(string str1,string str2){
    return str1+str2;
}

int main(){
    string str1,str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    cout<<"After concatenate two strings: "<<concatenatestrings(str1,str2);
}