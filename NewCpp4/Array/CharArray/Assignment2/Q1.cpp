/*
1. Remove Duplicates from a String
-> Problem Statement: Remove duplicate characters from a char array (string).
Explanation:
-> Use a loop to iterate and remove consecutive duplicate characters using extra space or in-place.
Input:
-> char str[] = "programming";  
Output:
-> Unique String: "progamin"
*/
#include<iostream>
using namespace std;

bool uniquechar(string str2,char ch){
    for(int i=0; i<str2.size();i++){
        if(str2[i]==ch)return false;
    }
    return true;
}

string uniqueStr(string str,int n){
    string str2="";
    for(int i=0; i<n; i++){
        if(uniquechar(str2,str[i]))str2+=str[i];
    }
    return str2;
}

int main(){
    string str="programming";
    int n=str.size();
    cout<<uniqueStr(str,n);
}