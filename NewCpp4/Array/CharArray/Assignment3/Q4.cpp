/*
4. Remove All Special Characters from a String
-> Problem Statement: Remove all special characters from a char array (string).

Explanation:
-> Iterate through the string, copying only alphanumeric characters.

Input:
-> char str[] = "hello@world!123";  

Output:
-> String without Special Characters: "helloworld123" 
*/
#include<iostream>
using namespace std;

string removespecialChar(string str,int n){
    string str2;
    for(int i=0; i<n; i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>'A'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9')){
            str2+=str[i];
        }
    }
    return str2;
}
int main(){
    string str="hello@world!123";
    int n=str.size();
    cout<<removespecialChar(str,n);
}