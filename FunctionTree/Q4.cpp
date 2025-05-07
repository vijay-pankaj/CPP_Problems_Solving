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
    cout << "Function E End\n";
}
void funcD()
{
    cout << "Function D start\n";
    cout << "Function D End\n";
}
void funcC()
{
    cout << "Function C start\n";
    funcD();
    funcE();
    funcF();
    cout << "Function C End\n";
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
  (A)(main)
   |
  (B)
   |
  (C)
/  |  \
(D)(E)(F)

*/