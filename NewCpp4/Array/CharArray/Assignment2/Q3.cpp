/*
3. Split a String into Words
-> Problem Statement: Split a string into words and store them in an array of char arrays.
Explanation:
-> Use a loop to find spaces, split the string, and store words.
Input:
-> char str[] = "hello world from c++";  
Output:
-> Words: hello, world, from, c++ 
*/
#include<iostream>
using namespace std;
void stringsplitIntoWord(string str){
    string str2="";
    for(int i=0; i<str.size();i++){
        if(str[i]!=' ')str2+=str[i];
        else{
            cout<<str2<<" ";
            str2="";
        }
    }
       if (!str2.empty()) {
        cout << str2 << " ";
    }
}

int main(){
    string str="hello world from c++";
    cout<<str.size();
    stringsplitIntoWord(str);
}