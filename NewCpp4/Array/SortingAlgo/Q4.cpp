/*
4.  Write a program to count the number of swaps in Bubble Sort :
Input : arr[] = [64, 34, 25, 12, 22, 11, 90]
Output : Sorted array: 11 12 22 25 34 64 90
	 Number of swaps: 15
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n=7;
    int count=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<n-i; j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                count++;
            }
        }
    }
    cout<<count<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}