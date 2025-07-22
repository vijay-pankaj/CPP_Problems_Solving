/*
2. Convert a String to Uppercase
-> Problem Statement: Convert all characters in a char array (string) to uppercase.
Explanation:
-> Iterate through the array and convert each character if it's between 'a' and 'z'.
-> Use ASCII values to convert lowercase to uppercase.
Input:
-> char str[] = "hello";  
Output:
-> Uppercase String: "HELLO" 
*/

#include<iostream>
using namespace std;
void reverseCharArr(char arr[],int n){
    int start=0,end=n-1;
        string str2="";
    while(start<=end){
        // arr[start]=toupper(arr[start]);
        arr[start]=arr[start]-32;
        start++;
    }
    for(int i=0; i<n; i++){
        // string str2="";
        // cout<<arr[i]<<" ";
        str2+=arr[i];
        
    }
    cout<<str2;
}
int main(){
    char arr[]={'h','e','l','l','o'};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseCharArr(arr,n);
}