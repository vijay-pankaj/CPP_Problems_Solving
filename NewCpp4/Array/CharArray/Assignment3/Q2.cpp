/*
2. Count Digits and Alphabets in a String
-> Problem Statement: Count the number of digits and alphabets in a char array (string).

Explanation:
-> Loop through the string and increment counters based on character types.

Input:
-> char str[] = "abc123";  

Output:
-> Digits: 3
-> Alphabets: 6 
*/
#include<iostream>
using namespace std;

void coutnDigitAndAlpha(string str,int n){
    int digit=0,alpha=0;
    for(int i=0; i<n;i++){
        if(str[i]>='0'&&str[i]<='9')digit++;
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))alpha++;
    }
    cout<<"Digit: "<<digit;
    cout<<"Allphabet: "<<alpha;
}

int main(){
    string str="abc123";
    int n=str.size();
    coutnDigitAndAlpha(str,n);
}