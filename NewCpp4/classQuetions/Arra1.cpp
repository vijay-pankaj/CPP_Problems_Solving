#include<iostream>
using namespace std;
int main(){
    int arr[]={12,2,3445,66,788,99};
    int even=0;
    int k=0;
    int *temp =new int[k];
    for(int i=0; i<6; i++){
        int count=0;
        while(arr[i]){
            arr[i]/=10;
            count++;
        }
        if(count%2==0){
            // even++;
            temp[k]=arr[i];
            k++;
        }
    }
    for(int i=0 ; i<k; i++){
        cout<<temp[i]<<" ";
    }
    // cout<<even;
}