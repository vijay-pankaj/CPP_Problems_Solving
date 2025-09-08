/*
8. Compare Two Strings
-> Problem Statement: Compare two char arrays (strings) to check if they are equal.
Explanation:
-> Iterate through both strings, comparing characters until null terminators match.
Input:
-> char str1[] = "hello";  
-> char str2[] = "hello";  
Output:
-> Strings are Equal: Yes 
*/
#include<iostream>
using namespace std;

bool isBothsame(string str1,string str2){
    if(str1.size()!=str2.size())return false;
    int i=0;
    while(i<str1.size()){
        if(str1[i]==str2[i])i++;
        else return false;
    }
    return true;
}

int main(){
    string str1="hello";
    string str2="hello";
    if(isBothsame(str1,str2))cout<<"Yes";
    else cout<<"No";
}