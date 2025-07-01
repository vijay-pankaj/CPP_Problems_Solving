/*
1. Print the elements of an array :
Explanation: Simply traverse the array and print each element. This teaches students how to iterate through an array using loops.
Input: arr = [1, 2, 3, 4, 5]
Output: 1 2 3 4 5*/

#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int k=sizeof(arr)/sizeof(arr[0]);
    print(arr,k);
}