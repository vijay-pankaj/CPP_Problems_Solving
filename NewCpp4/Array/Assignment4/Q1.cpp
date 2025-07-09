/*
1.Find Pair with Given Sum: Write a program to find all pairs in an array whose sum equals a given target sum.
Input: arr = [1, 4, 5, 3, 2], target = 6
Output:(1, 5) (4, 2)
*/
#include<iostream>
using namespace std;

void sumEqualTOTarget(int arr[],int n,int target){
    for(int i=0; i<n; i++){
        int start=i;
        for(int j=i+1; j<n; j++){
            if(arr[start]+arr[j]==target)cout<<"("<<arr[start]<<","<<arr[j]<<")";
        }
    }
}
  
int main(){
    int arr[]={1,4,5,3,2};
    int target=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    sumEqualTOTarget(arr,n,target);
}
//(1,5)(4,2)