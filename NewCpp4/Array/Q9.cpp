/*
9. Find the index of a specific element :
Explanation: Search for a specific number in the array and return its index. If not found, return -1.
Input: arr = [1, 3, 5, 7], key = 5
Output: Index: 2
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
    cout<<endl;
}

void userIPElem(int *arr, int n)
{
    cout << "Enter elmentes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// int isElmentFound(int arr[],int n){
bool isElmentFound(int arr[],int n){

    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    for(int i=0; i<n; i++){
        // if(arr[i]==key)return i;
        if(arr[i]==key)return true;
    }
    // return -1;
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
    if(isElmentFound(arr,n))cout<<"Yes";
    else cout<<"No";
}