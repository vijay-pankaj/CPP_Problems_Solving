/*
8. Binary Search :
Write a Program to Binary Search
Input: arr = [5, 9, 11, 2], key = 11
Output: Yes
*/
#include <iostream>
using namespace std;

void binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            cout << "Yes" << endl;
            return;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "No" << endl;
}

int main()
{
    int arr[] = {5, 9, 11, 2};
    int key = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    binarySearch(arr, n, key);
    return 0;
}