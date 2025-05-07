#include <bits/stdc++.h>
using namespace std;

void funcD()
{
    cout << "Function D start\n";
    cout << "Function D end\n";
}

void funcC()
{
    cout << " Function C start\n";
    funcD();
    cout << " Function C end\n";
}

void funcB()
{
    cout << "function B start\n";
    funcC();
    cout << "function B end\n";
}

int main()
{
    cout << "main Function start\n";
    funcB();
    cout << "main Function end\n";
}
/*
(main)
 |
(B)
 |
(C)
 |
(D)
*/