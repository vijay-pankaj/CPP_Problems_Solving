// User se 3 input lena hai agar maximum value 'a' hoti hai to ek function call karna hai jo current date print karega.
//  Agar maximum value 'b' hoti hai to ek function call karna hai jo system time print karega.
// Agar maximum value 'c' hoti hai to ek function call karna hai jo "Hello, World!" print karega.
#include <bits/stdc++.h>
using namespace std;

void print()
{
    cout << "Hello World!";
}

void currentTime()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "current time: " << ltm->tm_hour << ":" << ltm->tm_min;
}

void currentDate()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "current date: " << ltm->tm_mday;
}

void maxNum(int a, int b, int c)
{
    int maxval = max(a, max(b, c));
    if (maxval == a)
    {
        currentDate();
    }
    else if (maxval == b)
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
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    maxNum(a, b, c);
}