/*
2. Intersection of Two Arrays: Write a program to find and print the intersection of two arrays.
Input: arr1 = [1, 2, 3, 4], arr2 = [3, 4, 5, 6]
Output: 3 4
*/
#include<iostream>
using namespace std;
void  itersectionofTwoArray(int arr1[], int n, int arr2[], int m){
    int minLength=n;
    if(m>n)minLength=m;
    cout<<"intersection values i d: ";
    for(int i=0; i<minLength; i++){
        int value=arr1[i];
        for(int j=0;j<m; j++){
            if(value==arr2[j])cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={3,4,5,6};
    int n= sizeof(arr1)/sizeof(arr1[0]);
    int m= sizeof(arr2)/sizeof(arr2[0]);
    itersectionofTwoArray(arr1,n,arr2,m);
}