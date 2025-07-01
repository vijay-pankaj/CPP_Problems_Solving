/*
6. Count occurrences of a specific element :
Explanation: Count how many times a specific number (key) appears in the array. Useful for learning conditional statements and counters.
Input: arr = [2, 3, 3, 4, 3], key = 3
Output: Occurrences of 3: 3
*/
#include <iostream>
using namespace std;

void elmentsbyUser(int *arr, int n)
{
    cout << "Elements GIven by user: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void userIPElem(int *arr, int n)
{
    cout << "Enter elmentes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int countSpecifiNum(int arr[],int n){
    int s,count=0;
    cout<<"Enter specific Num: ";
    cin>>s;
    for(int i=0; i<n; i++){
        if(arr[i]==s){
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "enter number of elment: ";
    cin >> n;
    int *arr = new int[n];
    userIPElem(arr, n);
    elmentsbyUser(arr, n);
    cout<<countSpecifiNum( arr,n);
}