/*
3. Union of Two Arrays: Write a program to find and print the union of two arrays.
Input: arr1 = [1, 2, 3], arr2 = [3, 4, 5]
Output: 1 2 3 4 5
*/
#include<iostream>
using namespace std;

bool isvalueInFirstArr(int arr[], int n,int val ){
for(int i=0; i<n; i++){
       if(arr[i]==val)return true;
    }
    return false;
}

void unionArray(int arr[],int arr2[],int n ,int m){
    for(int i=0; i<m; i++){
        int val=arr2[i];
        if(!(isvalueInFirstArr(arr, n, val))){
            arr[n]=val;
            n++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3};
    int arr2[]={3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr2)/sizeof(arr[0]);
    unionArray(arr,arr2,n,m);
}