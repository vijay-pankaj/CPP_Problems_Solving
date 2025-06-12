/*
19. Character Classification :

Input: a
Output: Lowercase Alphabet

Input: 5
Output: Digit

Input: #
Output: Special Character
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any keyWord: ";
    cin>>ch;
    if(ch>='a'&&ch<='z')cout<<"Lowercase Alphabet";
    else if(ch>='0'&&ch<='9')cout<<"Digit";
    else if(ch>='A'&&ch<='Z')cout<<"Uppercase letter";
    else cout<<"Special character";
}