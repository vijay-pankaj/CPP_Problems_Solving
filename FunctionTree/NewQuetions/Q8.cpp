// User se 5 input lena hai agar unka average 60 se zyada hota hai to
// ek function call karna hai jo 1-10 ke even numbers print karega.
// Agar average 60 se kam hota hai to ek function call karna hai jo 1-10 ke odd numbers print karega.
#include <bits/stdc++.h>
using namespace std;

void oddNum()
{
    cout << "odd numbers: ";
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}

void evenNum()
{
    cout << "even numbers: ";
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}

void average(int n1, int n2, int n3, int n4, int n5)
{
    int averageOfNum = (n1 + n2 + n3 + n4 + n5) / 5;
    if (averageOfNum >= 60)
    {
        evenNum();
    }
    else if (averageOfNum < 60)
    {
        oddNum();
    }
}

int main()
{
    int n1, n2, n3, n4, n5;
    cout << "Enter 5 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    average(n1, n2, n3, n4, n5);
}