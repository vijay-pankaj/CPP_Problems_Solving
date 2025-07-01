/*
7. Check if an element exists in the array :
Explanation: Search for a specific number in the array and return "Yes" if found, otherwise "No".
Input: arr = [5, 9, 11, 2], key = 11
Output: Yes
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
bool isElmentFound(int arr[],int n){
    int searchEle;
    cout<<"Enter element to search: ";
    cin>>searchEle;
    for(int i=0; i<n; i++){
        if(arr[i]==searchEle)return true;
    }
    return false;

}

int main()
{
    int n;
    cout << "enter number of elment: ";
    cin >> n;
    int *arr = new int[n];
    userIPElem(arr, n);
    elmentsbyUser(arr, n);
    if(isElmentFound(arr,n))cout<<"yes! Elemnet  is found";
    else cout<<"No! Element not found";
}