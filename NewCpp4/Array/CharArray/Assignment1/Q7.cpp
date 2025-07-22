/*
7. Concatenate Two Strings
-> Problem Statement: Concatenate two char arrays (strings) into the first one.
Explanation:
-> Use a loop to copy characters from the second string to the end of the first string.
Input:
-> char str1[20] = "hello";  
-> char str2[] = " world";
*/
#include<iostream>
using namespace std;
void concatenet(char ch[],int n, char ch2[],int m){
    string str2="";
    for(int i=0; i<n; i++){
        str2+=ch[i];
    }
    for(int j=0; j<m; j++){
        str2+=ch2[j];
    }
    cout<<str2;
}
int main(){
    char ch[20]={'h','e','l','l','o'};
    int n=sizeof(ch)/sizeof(ch[0]);
    char ch2[]={' ' ,'w','o','r','l','d'};
    int m=sizeof(ch2)/sizeof(ch2[0]);
    
    concatenet(ch,n,ch2,m);
}