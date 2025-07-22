/*
7. Convert a String to a Number (Integer)
-> Problem Statement: Convert a char array (string) representing an integer into an integer value.

Explanation:
-> Use the atoi function (from C-style) or write your own logic to convert string to integer.

Input:
-> char str[] = "12345";  

Output:
-> Integer Value: 12345 
*/
#include<iostream>
using namespace std;

int stringToInt(string str,int n){
    return stoi(str);
}

int main(){
    string str="12345";
    int n=str.size();
    cout<<stringToInt(str,n);
}