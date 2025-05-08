// User se 3 input lena hai agar maximum value 'b' hoti hai to ek function call karna hai jo 5 ka factorial print karega.
//  Agar maximum value 'c' hoti hai to check karna hai ki 'c' prime number hai ya nahi.
//  Agar maximum value 'a' hoti hai to apna naam print karna hai.
#include <bits/stdc++.h>
using namespace std;
string isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return "not prime number";
        }
    }
    return "prime number";
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

void maxNum(int a, int b, int c)
{
    int maxVal = max(a, max(b, c));
    if (maxVal == b)
    {
        cout << "factorial is : " << fact(5);
    }
    else if (maxVal == c)
    {
        cout << c << "  is " << isPrime(c);
    }
    else
    {
        cout << "vijay pankaj";
    }
}

int main()
{
    int a, b, c;
    cout << "enter three numbers: ";
    cin >> a >> b >> c;
    maxNum(a, b, c);
}