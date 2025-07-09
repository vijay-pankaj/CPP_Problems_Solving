/*
3. Selection Sort : 
Write a C++ program to implement the Selection Sort algorithm to sort an array of integers in ascending order. 
Display the intermediate arrays after each iteration.
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

void selectionsort( int arr[], int n){
    for(int i=0; i<n; i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIdx]>arr[j]){
                minIdx=j;
            }
           
        }
         if(i!=minIdx){
                swap(arr[i],arr[minIdx]);
            }
    }
    print(arr,n);
}
int main(){
    int arr[]={3,2,6,5,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
}