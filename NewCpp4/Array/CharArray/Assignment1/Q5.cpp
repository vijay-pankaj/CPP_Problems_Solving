/*
5. Check If a String is a Palindrome
-> Problem Statement: Check if a given char array (string) is a palindrome.
Explanation:
-> Compare characters from the beginning and the end, moving toward the center.
-> If any characters don’t match, it’s not a palindrome.
Input:
-> char str[] = "madam";  
Output:
-> Is Palindrome: Yes
*/
#include<iostream>
using namespace std;
bool ispalindrome(char arr[],int n,string str){
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
    return str==str2;
}
int main(){
    string str="madam";
    char arr[]={'m','a','d','a','m'};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(ispalindrome(arr,n,str))cout<<"yes";
    else cout<<"No";
}