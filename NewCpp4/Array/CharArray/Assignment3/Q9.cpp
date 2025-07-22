/*
9. Count the Occurrences of Substring
-> Problem Statement: Count the occurrences of a given substring in a char array (string).
Explanation:
-> Use nested loops to find all occurrences of the substring.
Input:
-> char str[] = "repeat the word repeat";  
-> char substr[] = "repeat";  
Output:
-> Occurrences of "repeat": 2 
*/
#include<iostream>
using namespace std;
int occOfWord(string str,int n,string key){
    int count=0;
    for(int i=0; i<str.size(); i++){
        if(str.substr(i, key.size()) == key)count++;
    }
    return count;
}
int main(){
    string str="repeat the word repeat";
    int n=str.size();
    string key="repeat";
    cout<<occOfWord(str,n,key);
}