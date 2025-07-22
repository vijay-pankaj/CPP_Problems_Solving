/*
6. Remove All Spaces from a String
-> Problem Statement: Remove all spaces from a char array (string).
Explanation:
-> Iterate through the string, copying non-space characters into a new string or modifying the original array.
Input:
-> char str[] = "hello world";  
Output:
-> String without Spaces: "helloworld"
*/
#include<iostream>
using namespace std;
string removewhitespace(char ch[],int n){
    int i=0;
    string str2="";

    while(i<n){
        if(ch[i]!=' '){
            str2+=ch[i];
        }
        i++;
    }
    return str2;
}
int main(){
    char ch[]={'h','e','l','l','o',' ','w','o','r','l','d'};
    int n=sizeof(ch)/sizeof(ch[0]);
    cout<<removewhitespace(ch,n);
}