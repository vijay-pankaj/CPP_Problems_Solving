/*Print numbers from 1 to N: Write a program to
print numbers from 1 to a given number N.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter number: ";
    cin>>n;
    while (n>=i)
    {
        cout << i<<" ";
        i++;
    }
}