/*
6. Array Rotation (Left): Write a program to rotate the elements of an array by k positions to the left.
Input: arr = [1, 2, 3, 4, 5], k = 2
Output: 3 4 5 1 2
*/
#include<iostream>
using namespace std;

void rotate(int arr[],int n,int r){
    int m=0;
    int *newarr=new int[m];
    for(int i=0; i<n; i++){
    int k=(r+i)%n;
    newarr[k]=arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<newarr[i]<<" ";
    }
}

int main(){
int arr[]={10,20,30,40,50};
int n=sizeof(arr)/sizeof(arr[0]);
int r;
cout<<"Enter number of rotation:  ";
cin>>r;

rotate(arr,n,r);
}