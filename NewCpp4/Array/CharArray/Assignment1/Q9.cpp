/*
9. Convert a String to Lowercase
-> Problem Statement: Convert all characters in a char array (string) to lowercase.

Explanation:
-> Iterate through the string and subtract 32 from uppercase letters to convert them to lowercase.

Input:
-> char str[] = "HELLO";  

Output:
-> Lowercase String: "hello" 
*/
#include<iostream>
using namespace std;

string uppercharToLower(char str[],int n){
    for(int i=0; i<n; i++){
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    string str1="";
    for(int j=0; j<n; j++){
        str1+=str[j];
    }
    return str1;
    
}

int main(){
    char str[] ={'H','E','L','L','O'};
    int n=sizeof(str)/sizeof(str[0]);
    cout<<uppercharToLower(str,n);
}