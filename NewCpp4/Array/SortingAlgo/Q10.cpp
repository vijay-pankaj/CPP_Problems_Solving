/*
10. Find the First and Last Occurrence of an Element in a Sorted Array :
Given a sorted array, find the indices of the first and last occurrence of a target element.
Input: arr = [1, 2, 2, 2, 3, 4], target = 2
Output: First = 1, Last = 3
*/
#include<iostream>
using namespace std;

void findFirstAndLastOccurrence(int arr[], int n, int target) {
    int start=0, end=n;
    while(start < end) {
        while(arr[start] != target && start < end) {
            start++;
        }
        while (end!=target && start < end) {
            end--;
        }
        if(arr[start] == target && arr[end] == target) {
            cout << "First Occurrence: " << start << ", Last Occurrence: " << end+1 << endl;
            return;
        }
        
    }
}

int main(){
    int arr[] = {1, 2, 2, 2, 3, 4};
    int target = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    findFirstAndLastOccurrence(arr, n, target);
    
    
}