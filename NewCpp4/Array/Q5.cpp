/*
5. Reverse an array :
Explanation: Reverse the order of elements in the array. This demonstrates array manipulation and swapping.
Input: arr = [1, 2, 3, 4]
Output: [4, 3, 2, 1]
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



// void reverseArray(int arr[],int k){
//     int m=0,start=0,end=k-1;
//     int *temp=new int[m];
//     // k-1 0
//     while(start<=end){
//         temp[m]=arr[end];
//         m++;
//         end--;
//     }
//     print(temp,m);
// }


void reverseArray(int arr[],int k){
    int start=0,end=k-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    print(arr,k);
}


int main(){
    int k;
    cout<<"How many Elemnts do want enter in array: ";
    cin>>k;
    int *arr=new int[k];
    input(arr,k);
    print(arr,k);
    reverseArray(arr, k);
    

}