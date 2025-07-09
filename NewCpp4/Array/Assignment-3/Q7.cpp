/*
7. Array with Elements as Powers of 2: Write a program to create an array where each element is the power of 2 starting from 2^0.
Input: n = 5
Output: 1 2 4 8 16
*/
#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";    
    }
}

void input(int *arr, int n){
     int pow=1 ,i=0;
    while(i<n){
      arr[i]=pow;
      pow*=2;
      i++;
    }
}
int main(){
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int *arr=new int[n];
    input(arr,n);
    print(arr,n);
}