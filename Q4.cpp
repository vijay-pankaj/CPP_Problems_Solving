// 4.Check if a string is a palindrome Input: "madam" Output: true
#include<bits/stdc++.h>
using namespace std;

bool isStringPalindrome(string str){
    int n=str.length();
    for(int i=0; i<=n/2; i++){
        if(str[i]!=str[n-i-1])
        return false;
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    if(isStringPalindrome(str)){
        cout<<"Yes given string is palindrome ";
    }else{
        cout<<"No, Given string is not palindrome";
    }
}