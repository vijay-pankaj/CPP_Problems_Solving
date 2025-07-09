/*
6. Sort an Array of Even and Odd Numbers :
Sort an array such that all even numbers come before odd numbers without changing their relative order.
Input: [3, 8, 5, 2, 1, 4]
Output: [8, 2, 4, 3, 5, 1]
*/
#include <iostream>
using namespace std;

// void evenOrOdd(int arr[], int n)
// {
//     int start = 0, end = n - 1;
//     while (start < end)
//     {
//         while (arr[start] % 2 == 0 && start < end)
//         {
//             start++;
//         }
//         while (arr[end] % 2 != 0 && start < end)
//         {
//             end--;
//         }

//         if (arr[start] % 2 != 0 && arr[end] % 2 == 0)
//         {
//             // Swap the elements
//             int temp = arr[start];
//             arr[start] = arr[end];
//             arr[end] = temp;
//         }
//         start++;
//         end--;
//     }
//     cout << "Sorted array even and odd numbers: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
void evenOrOdd(int arr[], int n){
    
}
int main()
{
    int arr[] = {3, 8, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    evenOrOdd(arr, n);
}