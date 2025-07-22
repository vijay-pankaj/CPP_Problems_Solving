/*
8. Find the Peak Element: Write a program to find a peak element in an array. A peak element is greater than its neighbors.
Input: arr = [1, 3, 20, 4, 1]
Output: Peak element is 20
*/
#include<iostream>
#include<climits>
using namespace std;

int peakEle(int arr[],int n){
    int peak=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            if(arr[i]>peak)peak=arr[i];
        }
    }
    return peak;
}

int main(){
    int arr[]={1, 3, 20, 4, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<peakEle(arr,n);
}