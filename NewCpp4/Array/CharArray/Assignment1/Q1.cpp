/*
1. Reverse a char array (String)
-> Problem Statement: Write a function to reverse a given string stored in a char array.
Explanation:
-> Use two pointers, one starting at the beginning and the other at the end, swapping characters until they meet in the middle.
-> Only arrays are allowed (no STL libraries like std::string).
Input:
-> char str[] = "'h','e','l','l','o'";  
Output:
-> Reversed String: "olleh" 
*/
#include<iostream>
using namespace std;
void reverseCharArr(char arr[],int n){
    int start=0,end=n-1;
        string str2="";
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
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
