/*
9.  Count the Occurrences of a Given Element in an Unsorted Array :
Write a program to count how many times a specific element occurs in an unsorted array.
Input: arr = [1, 2, 3, 1, 2, 1], target = 1
Output: 3
*/

#include<iostream>
using namespace std;

int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main(){
    int arr[] = {1, 2, 3, 1, 2, 1};
    int target = 1;
    cout<< "Count of " << target << " in the array: " << countOccurrences(arr, sizeof(arr)/sizeof(arr[0]), target) << endl;
}