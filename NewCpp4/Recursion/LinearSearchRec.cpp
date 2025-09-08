#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key,int i){
    if(i==n)return -1;
    if(arr[i]==key)return i;
    return linearsearch(arr,n,key,i+1);
}
int main(){
    int arr[]={10,15,7,9,8,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    int i=0;
    cout<<linearsearch(arr,n,key,i);
}