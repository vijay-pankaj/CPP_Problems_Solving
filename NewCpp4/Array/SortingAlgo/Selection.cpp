#include<iostream>
using namespace std;

void selectionSort(int arr[] ,int n){
    for(int i=0; i<n-1; i++){
        int minIdx=i;
        for(int j=i+1; j<n; j++){
            if(arr[minIdx]>arr[j]){
                minIdx=j;
            }
        }
            swap(arr[minIdx],arr[i]);
    }
}

void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void input(int *arr, int n){
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int main(){
    int n;
    cout<<"enter number of elemnets: ";
    cin>>n;
    int *arr=new int[n];
    input( arr,n);
    print(arr,n);
    selectionSort(arr,n);
    print(arr,n);

}