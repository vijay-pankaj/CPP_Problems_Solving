/*8. Count Words in a String
-> Problem Statement: Count the number of words in a char array (string).
Explanation:
-> Split the string by spaces and count the number of words.
Input:
-> char str[] = "hello world from c++";  
Output:
-> Word Count: 4*/
#include<iostream>
using namespace std;

int countwords(string str,int n){
    int i=0,count=0;
    while(i<n){
        if(str[i]!=' ')
    }
    return count;
}

int main(){
    string str="hello world from c++";
    int n=str.size();
   cout<<countwords(str,n);
}