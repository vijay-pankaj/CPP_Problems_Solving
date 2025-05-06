// 42. Write a C++ function that takes an integer as input and uses nested if-else statements to determine
// if the number is prime and if it is less than a specifi c value.
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

string isgretaervalue(int n, int c)
{
    if (n > c)
    {
        if (isprime(n))
        {
            return "Prime and greater than specific value";
        }
        else
        {
            return "not prime but greater than specific value";
        }
    }
    else if (c > n)
    {
        if (isprime(n))
        {
            return "prime and lower than specific value";
        }
        else
        {
            return "Not prime and lower than specific value";
        }
    }
    else
    {
        return "euqal to specific value";
    }
}

int main()
{
    int n, c;
    cout << "enter number: ";
    cin >> n;

    cout << "Enter a specific value: ";
    cin >> c;

    cout << "given value is " << isgretaervalue(n, c);
}