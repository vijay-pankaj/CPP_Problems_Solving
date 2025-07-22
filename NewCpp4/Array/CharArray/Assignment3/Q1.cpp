/*
1. Remove Consecutive Duplicate Characters
-> Problem Statement: Remove consecutive duplicate characters from a char array (string).

Explanation:
-> Loop through the string and copy characters only if they are different from the previous character.

Input:
-> char str[] = "aabbcc";  

Output:
-> String without Consecutive Duplicates: "abc" 
*/
#include<iostream>
using namespace std;

bool uniqwordCheck(string str2,char ch){
    for(int i=0; i<str2.size();i++){
        if(str2[i]==ch)return false;
    }
    return true;
}

string  stringNonduplicate(string str,int n){
    string str2=" ";
    for(int i=0; i<n; i++){
        if(uniqwordCheck(str2,str[i]))str2+=str[i];
    }
    return str2;
}

int main(){
    string str="aabbcc";
    int n=str.size();
    cout<<stringNonduplicate(str,n);
}