/*
8. Check Alphabet :

Input: a
Output: Alphabet

Input: 5
Output: Not an Alphabet
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter number: ";
    cin>>ch;

    // if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))cout<<"Alphabet";
    // else cout<<"Not Alphabet";

   string checkalphabet= ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?"Alphabet":"Not an Alphabet";
   cout<<checkalphabet;
    }