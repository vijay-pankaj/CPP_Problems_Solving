/*
4. Find the Length of a String
-> Problem Statement: Find the length of a char array (string) without using the strlen function.

Explanation:
-> Loop through the array, counting characters until \0 is reached.
-> The null terminator indicates the end of the string.

Input:
-> char str[] = "programming";  

Output:
-> Length of String: 11 
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={'p','r','o','g','r','a','m','m','i','n','g'};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
}