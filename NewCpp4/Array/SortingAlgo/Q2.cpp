/*
2. Insertion Sort : 
Write a C++ program to implement the Insertion Sort algorithm to sort an array of integers in ascending order.
Input : arr = [3,2,6,5,9]
Output : 2 3 5 6 9
*/
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort( int arr[],int n){
    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    print(arr,n);
}
int main(){
    int arr[]={3,2,6,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);

}