#include <bits/stdc++.h>
using namespace std;
void funcD()
{
    cout << "Function D start\n";
    cout << "Function D End\n";
}
void funcH()
{
    cout << "Function H start\n";
    cout << "Function H End\n";
}

void funcI()
{
    cout << "Function I start\n";
    cout << "Function I End\n";
}

void funcG()
{
    cout << "Function G start\n";
    funcI();
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
    funcF();
    funcG();
    funcH();
    cout << "Function E End\n";
}
void funcC()
{
    cout << "Function C start\n";
    funcE();
    cout << "Function C End\n";
}

void funcB()
{
    cout << "Function B start\n";
    cout << "Function B End\n";
}
int main()
{
    cout << "main Function start\n";
    funcB();
    funcC();
    funcD();
    cout << "main Function end\n";
}

/*
   (A)
  / | \
(B)(C)(D)
    |
   (E)
  / | \
(F)(G)(H)
    |
   (I)


*/