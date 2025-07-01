/*
8. Find the average of all elements in an array :
Explanation: Calculate the average by dividing the sum of elements by the number of elements.
Input: arr = [2, 4, 6, 8]
Output: Average: 5.0
*/
#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    cout << "Elements GIven by user: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void input(int *arr, int n)
{
    cout << "Enter elmentes: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

float average(int arr[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum/n;
}


int main(){
    int n;
    cout<<"enter number of elemnets: ";
    cin>>n;
    int *arr=new int[n];
    input(arr,n);
    print(arr,n);
    cout<<"Everage of elemnts is: "<<average(arr, n);
}