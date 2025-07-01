/*
3. Find the largest element in an array :
Explanation: Compare each element of the array to track the maximum value. Teaches comparison logic.
Input: arr = [10, 20, 5, 8]
Output: Largest: 20
*/
#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i <= n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return  max;
    }
}

int main()
{
    int arr[] = {-10, -20, -90, -40, -5};
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    cout<<maxElement( arr, n);

}