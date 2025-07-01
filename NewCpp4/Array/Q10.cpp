/*
10. Copy elements from one array to another :
Explanation: Copy all elements of one array into another. Helps students understand array initialization and traversal.
Input: arr1 = [1, 2, 3]
Output: arr2 = [1, 2, 3]
*/
#include<iostream>
using namespace std;

void GivenElements(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void userIp(int *arr,int n){
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}


void copyEleOneArrayToAnother(int arr[],int n){
    int i=0, *temp=new int[i];
    while(i<n){
        temp[i]=arr[i];
        i++;
    }
     GivenElements(temp,i);
}

int main(){
    int n;
    cout<<"Number of Elemnets: ";
    cin>>n;
    int *arr=new int[n];
    userIp(arr,n);
    GivenElements(arr,n);
    copyEleOneArrayToAnother(arr,n);
}