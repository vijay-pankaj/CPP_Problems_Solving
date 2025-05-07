#include <bits/stdc++.h>
using namespace std;

void funcF()
{
    cout << "Function F start\n";
    cout << "Function F End\n";
}

void funcE()
{
    cout << "Function E start\n";
    funcF();
    cout << "Function E End\n";
}
void funcC()
{
    cout << " Function C start\n";
    funcE();
    cout << " Function C end\n";
}

void funcD()
{
    cout << "Function D start\n";
    funcF();
    cout << "Function D end\n";
}
void funcB()
{
    cout << "Function B start\n";
    funcD();
    cout << "Function B End\n";
}
int main()
{
    cout << "Main Function start\n";
    funcB();
    funcC();
    cout << "Main Function End\n";
}

/*
   (A)
 /    \
(B)   (C)
 |     |
(D)   (E)
  \  /
   (F)
 */