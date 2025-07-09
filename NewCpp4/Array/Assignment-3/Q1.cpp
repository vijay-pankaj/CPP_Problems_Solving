/*
1. Move All Zeros to the End: Write a program to move all zeros in an array to the end without changing the relative order of non-zero elements.
Input: arr = [0, 1, 2, 0, 3, 4]
Output : 1 2 3 4 0 0
*/

#include<iostream>
using namespace std;

// void sortedZerolast(int arr[],int n){
//     int start=0,end=n-1;
//     while(start<end){
//         while(arr[start]!=0 && start<n)start++;
//         while(arr[end]==0 && end>=0)end--;
//         if(start<n && end>=0){
//             swap(arr[start],arr[end]);
//         }
//         start++;
//         end--;
//     }
//     cout<<"sorted array is zeroe are last : ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     //sorted array is zeroe are last : 4 1 2 3 0 0 
// }
void sortedZerolast(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
      if(arr[i]!=0) arr[count++]=arr[i];
    }
    while(count<n){
        arr[count++]=0;
    }
     cout<<"sorted array is zeroe are last : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    // sorted array is zeroe are last : 1 2 3 4 0 0 
    
}


int main(){
int arr[]={0,1,2,0,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
sortedZerolast(arr,n);
}