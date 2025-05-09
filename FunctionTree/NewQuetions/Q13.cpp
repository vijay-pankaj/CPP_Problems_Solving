// User se 3 input lena hai aur agar average 50 se zyada hota hai to ek function call karna hai jo 20-30 print karega.
//  Agar average 50 se kam hota hai to dusra function call karna hai jo 1-20 print karega.
#include <bits/stdc++.h>
using namespace std;
void print2()
{
    for (int i = 1; i <= 20; i++)
    {
        cout << i << " ";
    }
}

void print()
{
    for (int i = 20; i <= 30; i++)
    {
        cout << i << " ";
    }
}

void averageOfNum(int n1, int n2, int n3)
{
    int average = (n1 + n2 + n3) / 3;
    if (average >= 50)
    {
        print();
    }
    else
    {
        print2();
    }
}

int main()
{
    int n1, n2, n3;
    cout << "enter three number: ";
    cin >> n1 >> n2 >> n3;
    averageOfNum(n1, n2, n3);
}