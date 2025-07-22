/*
7. Check If a Substring Exists in a String
-> Problem Statement: Check if a given substring exists in a char array (string).

Explanation:
-> Use the strstr function to find the first occurrence of the substring.

Input:
-> char str[] = "programming is fun";  
-> char substr[] = "fun";  

Output:
-> Substring Found: Yes 
*/
#include<iostream>
using namespace std;
bool isSubstringExist(string str,int n,string key){
    for(int i=0; i<str.size(); i++){
        if(str.substr(i, key.size()) == key)return true;
    }
    return false;
}

int main(){
    string str="programming is fun";
    string key="fun";
    int n=str.size();
   if (isSubstringExist(str,n,key))cout<<"Yes";
   else cout<<"NO";
}