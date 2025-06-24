/*
5. Check Vowel or Consonant: Write a function that checks if a given character is a vowel or consonant.
Input: A
Output: Vowel
*/



#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    ch=tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    if(isVowel(ch))cout<<"Vowel";
    else cout<<"Consonent";
}