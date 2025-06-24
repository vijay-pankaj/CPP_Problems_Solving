/*
8. Check Alphabetic Character: Write a function that checks if a character is an alphabet or not.
Input: Z
Output: Alphabet
*/
#include<bits/stdc++.h>
using namespace std;

bool isAlphabet(char ch){
return ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'));
}

int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(isAlphabet(ch))cout<<"Alphabet";
    else cout<<"Not an Alphabet";
}