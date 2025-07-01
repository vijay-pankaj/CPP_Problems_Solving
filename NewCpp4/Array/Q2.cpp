/*
2. Find the sum of all elements in an array :
Explanation: Add all the elements of the array and return the total. Helps students understand loop traversal and addition.
Input: arr = [5, 10, 15]
Output: Sum: 30
*/
#include<iostream>
using namespace std;

int sumOfElement(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    int arr[]={5,10,15};
    int k=sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfElement(arr,k);
}