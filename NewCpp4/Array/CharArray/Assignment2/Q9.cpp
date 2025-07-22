/*
9. Find the First Word in a String
-> Problem Statement: Find the first word in a char array (string).

Explanation:
-> Loop through the string until a space is encountered and capture the first word.

Input:
-> char str[] = "this is a test string";  

Output:
-> First Word: "this"
*/
#include<iostream>
using namespace std;

string stringFristword(string str, int n){
    int start=0;
    string firstWord="";
    while(str[start]==' ')start++;
    while(str[start]!=' '){
        firstWord+=str[start];
        start++;
    }
    return firstWord;
}

int main(){
    string str="this is a test string";
    int n=str.size();
    cout<<stringFristword(str,n);
}