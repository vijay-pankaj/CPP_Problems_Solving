// User se 3 input lena hai agar maximum value 'a' hoti hai to ek function call karna hai jo current date print karega.
// Agar maximum value 'b' hoti hai to ek function call karna hai jo system time print karega.
// Agar maximum value 'c' hoti hai to ek function call karna hai jo "Goodbye, World!" print karega.

#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "Goodbye,World!";
}

void currentTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << ltm->tm_hour << ":" << ltm->tm_min;
}

void currentDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "current date " << ltm->tm_mday;
}

void maximum(int a, int b, int c)
{
    int maxVal = max(a, max(b, c));
    if (maxVal == a)
    {
        currentDate();
    }
    else if (maxVal == b)
    {
        currentTime();
    }
    else
    {
        print();
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    maximum(n1, n2, n3);
}