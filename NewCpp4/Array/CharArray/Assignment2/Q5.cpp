/*
5. Remove Characters from a String (except digits)
-> Problem Statement: Remove all non-numeric characters from a char array (string).
Explanation:
-> Iterate through the string and copy only digits to a new string.
Input:
-> char str[] = "abc123!@#456";  
Output:
-> Numeric String: "123456" 
*/
#include<iostream>
using namespace std;

string  removeAlpaspeChar(string str,int n){
    string str1="";
    for(int i=0; i<n;i++){
        if(str[i]>='0'&&str[i]<='9'){
            str1+=str[i];
        }
    }
    return str1;
}

int main(){
    string str="abc123!@#456";
    int n=str.size();
   cout<<removeAlpaspeChar(str,n);
}