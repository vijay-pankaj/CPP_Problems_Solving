#include<iostream>
using namespace std;

void swapingtwopair(int arr[],int n){
    int s=0,next=1;
    int i=0;
    while(i<n-1){
        if(s<n && next<n)swap(arr[s],arr[next]);
        s+=2;
        next+=2;
        i++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={20,10,40,30,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    swapingtwopair(arr,n);
}