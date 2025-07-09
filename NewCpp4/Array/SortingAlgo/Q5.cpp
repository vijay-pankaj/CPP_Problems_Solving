// /*
// 5. Sort an Array of Negative and Positive Numbers :
// Given an array with both negative and positive integers, 
// sort the array such that all negative numbers appear first, followed by the positive numbers.
// Input: [-1, 2, -3, 4, -5, 6]
// Output: [-1, -3, -5, 2, 4, 6]
// */
#include<iostream>
using namespace std;

void sortnegpos(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        while(arr[start]<end && arr[start]<0 )start++;
        while(arr[end]>0 && arr[start]<end)end--;
        if(arr[start]>0 && arr[end]<0)swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Sorted array by positive and negative: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    while(start<end){
        start=0;
        end=n-1;
        while(end>0)end--;
         for(int i=0; i<=end; i++){
            int minidx=i;
            for(int j=i+1; j<=end; i++){
                if(arr[minidx]>arr[j]){
                    minidx=j;
                }
            }
            if(minidx!=i){
                swap(arr[i],arr[minidx]);
            }
         }
         start++;
         end--;
    }
    cout<<"negative part sorted: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int main(){
    int arr[]={-1,2,-3,4,-5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortnegpos(arr,n);
}