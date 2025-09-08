#include<iostream>
using namespace std;
void revArr(int arr[],int n,int s){
    if(s>=n){
        return;
    }
     swap(arr[s],arr[n]);
    return revArr(arr,n-1,s+1);


}

int main(){
    int arr[]={2,5,7,8,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    revArr(arr,n-1,s);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}