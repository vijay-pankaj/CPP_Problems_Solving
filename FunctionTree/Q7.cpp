#include <bits/stdc++.h>
using namespace std;
void funcG()
{
    cout << "Function G start\n";
    cout << "Function G End\n";
}

void funcF()
{
    cout << "Function F start\n";
    cout << "Function F End\n";
}
void funcE()
{
    cout << "Function E start\n";
    cout << "Function E End\n";
}

void funcD()
{
    cout << "Function D start\n";
    funcE();
    funcF();
    funcG();
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
    cout << "Function B start\n";
    funcC();
    cout << "Function B End\n";
}
int main()
{
    cout << "main Function start\n";
    funcB();
    cout << "main Function end\n";
}

/*
   (A)  
    |
   (B)
    |
   (C)
    |
   (D)
  / | \
(E)(F)(G)
*/