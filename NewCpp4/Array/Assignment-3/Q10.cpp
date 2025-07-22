/*
10. Find the Product of Array Except Self: Write a program to find the product of all elements in an array except the current element.
Input: arr = [1, 2, 3, 4]
Output: 24 12 8 6
*/
#include<iostream>
using namespace std;
void productofNUm(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0; j<n; j++){
            if(arr[j]!=arr[i]){
                prod*=arr[j];
            }
        }
        temp[i]=prod;
    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
    int arr[]={1, 2, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    productofNUm(arr,n);
}