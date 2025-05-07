// User se 4 input lena hai agar unka sum 0 hota hai to ek function call karna hai jo entered numbers ka average print karega.
// Agar sum positive hota hai to ek function call karna hai jo first 5 prime numbers print karega.
// Agar sum negative hota hai to ek function call karna hai jo first 5 Fibonacci numbers print karega.
#include <bits/stdc++.h>
using namespace std;
void fibonacciNum()
{
    int a = 0, b = 1;
    cout << "fibonacci five number: ";
    for (int i = 1; i <= 5; i++)
    {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
}
void primeNum()
{
    for (int i = 2; i <= 11; i++)
    {
        int count = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << i << " ";
        }
    }
}

void sum(int n1, int n2, int n3, int n4)
{
    int sumOfNum = n1 + n2 + n3;
    if (sumOfNum > 0)
    {
        primeNum();
    }
    else if (sumOfNum < 0)
    {
        fibonacciNum();
    }
}

int main()
{
    int n1, n2, n3, n4;
    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;
    sum(n1, n2, n3, n4);
}