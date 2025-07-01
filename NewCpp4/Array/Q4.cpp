/*
4. Find the smallest element in an array :
Explanation: Similar to finding the largest element, but track the minimum value instead.
Input: arr = [8, 6, 3, 1, 9]
Output: Smallest: 1
*/
#include<iostream>
#include<climits>
using namespace std;

void input(int *arr, int k ){
    cout<<"Enter number of elemnets : "<<endl;
    for(int i=0;i<k;i++){
    cin>>arr[i];
    }
    cout<<endl;
}

void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int smallestValue(int arr[],int k){
    int min=INT_MAX;
    for(int i=0; i<k; i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int k;
    cout<<"How many Elemnts do want enter in array: ";
    cin>>k;
    int *arr=new int[k];
    input(arr,k);
    print(arr,k);
    cout<<"Smallest value in array is: "<<smallestValue(arr,k);

}