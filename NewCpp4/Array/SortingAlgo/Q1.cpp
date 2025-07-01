/*
1. Bubble Sort : 
Write a C++ program to implement the Bubble Sort algorithm and sort an array of integers in ascending order.
Input : arr = [3,2,6,5,9]
Output : 2 3 5 6 9
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,6,5,9};
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


