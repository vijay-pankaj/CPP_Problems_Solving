/*
3. Find the Most Frequent Character
-> Problem Statement: Find the most frequent character in a char array (string).
Explanation:
-> Use an array to track character counts and identify the maximum frequency.
Input:
-> char str[] = "progrrramming"; 
Output:
-> Most Frequent Character: 'r' (3 times)
*/
#include<iostream>
using namespace std;

  char mostFrequent(string str,int n){
    char ch;
    for(int i=0; i<n; i++){
         int charcount=0,lastcount=0;;
        for(int j=i+1; j<n; j++){
            if(str[i]==str[j])charcount++;
        }
        if(charcount>lastcount){
            ch=str[i];
        }
        lastcount=charcount;
    }
    return ch;
  }
    
int main(){
    string str="programming";
    int n=str.size();
    cout<<mostFrequent(str,n);
}