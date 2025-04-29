/*Develop a C++ function that takes a character as an argument and returns 
its ASCII value category (digit, uppercase letter, lowercase letter, special character) 
using if-else statements.*/
#include<bits/stdc++.h>
using namespace std;
string AsciiValueCategory(char ch){
    if(ch>='0'&& ch<='9'){
        return "Digit";
    }else if(ch>='A'&&ch<='Z'){
        return "UpperCase Letter";
    }else if(ch>='a'&&ch<='z'){
        return "LowerCase Letter";
    }else{
        return "Specia Character";
    }
}
int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    string category=AsciiValueCategory(ch);
    cout<<category;
}