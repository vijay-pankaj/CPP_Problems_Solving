// 4. Overload a function to add two integers, two floats, and an integer with a float.
#include <bits/stdc++.h>
using namespace std;
void add(int n1, float n2)
{
    cout << "\n sum of int n1 and float n2 :" << n1 + n2;
}
void add(float n1, float n2)
{
    cout << "\n sum of float n1 and float n2: " << n1 + n2;
}
void add(int n1, int n2)
{
    cout << "sum of int n1 and int n2: " << n1 + n2;
}
int main()
{
    int a = 2, b = 3;
    float c = 7.2, d = 8.2;
    add(a, b);
    add(c, d);
    add(a, c);
}