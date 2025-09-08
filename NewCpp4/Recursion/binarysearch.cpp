#include<iostream>
using namespace std;
int binarySearch(int s,int arr[],int n,int key){
    int mid=s+(n-s)/2;
    if(arr[mid]==key)return mid;
    else if(arr[mid]<key){
        s=mid+1;
        binarySearch(s,arr,n,key);
    }
    else if(arr[mid]>key){
        n=mid-1;
        binarySearch(s,arr,n,key);
    }
    else{
        return -1;
    }
}
int main(){
    int arr[]={4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=4;
    int start=0;
   cout<< binarySearch(start,arr,n,key);
}