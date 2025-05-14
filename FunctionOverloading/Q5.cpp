// 5. Write overloaded functions to swap two integers, two floats, and two characters
#include <bits/stdc++.h>
using namespace std;
void swape(char a, char b)
{
    cout << "\n Before swape char1: " << a << " And char2: " << b;
    char temp = a;
    a = b;
    b = temp;
    cout << "\n After swape char1: " << a << " And char2: " << b;
}
void swape(float n1, float n2)
{
    cout << "\n Before swape n1: " << n1 << " And n2: " << n2;
    float temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "\n After swape n1: " << n1 << " And n2: " << n2;
}
void swape(int n1, int n2)
{
    cout << "\n Before swape n1: " << n1 << " And n2: " << n2;
    int temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "\n After swape n1: " << n1 << " And n2: " << n2;
}

int main()
{
    int n1 = 3, n2 = 4;
    float num1 = 1.2, num2 = 3.2;
    char p = 'A', q = 'V';
    swape(n1, n2);
    swape(num1, num2);
    swape(p, q);
}