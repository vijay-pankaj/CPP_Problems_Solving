#include <bits/stdc++.h>
using namespace std;
void funcH()
{
    cout << "Function H start\n";
    cout << "Function H End\n";
}
void funcE()
{
    cout << "Function E start\n";
    funcH();
    cout << "Function E End\n";
}

void funcD()
{
    cout << "Function D start\n";
    funcE();
    cout << "Function D end\n";
}

void funcC()
{
    cout << " Function C start\n";
    funcD();
    cout << " Function C end\n";
}


void funcG()
{
    cout << "Function G start\n";
    funcH();
    cout << "Function G End\n";
}
void funcF()
{
    cout << "Function F start\n";
    funcG();
    cout << "Function F End\n";
}

void funcB()
{
    cout << "Function B start\n";
    funcF();
    cout << "Function B End\n";
}
int main()
{
    cout << "main Function start\n";
    funcB();
    funcC();
    cout << "main Function end\n";
}

/*
   (A)
  /    \
(B)    (C)
 |      |
(f)    (D)
 |      |
 (G)   (E)
   \   /
    (H)
   */