/*
6. Check If All Characters Are Digits
-> Problem Statement: Check if all characters in a char array (string) are digits.

Explanation:
-> Loop through the string and return true if all characters are digits.

Input:
-> char str[] = "12345";  

Output:
-> All Digits: Yes 
*/
#include<iostream>
using namespace std;

bool isAllDigit(string str,int n){
    for(auto it:str){
        if(!(it>='0'&&it<='9'))return false;
    }
    return true;
}

int main(){
    string str="12345";
    int n=str.size();
    if(isAllDigit(str,n))cout<<"Yes";
    else cout<<"NO";
}