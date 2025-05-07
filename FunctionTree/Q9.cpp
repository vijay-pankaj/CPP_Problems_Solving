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
    cout << "Function B start\n";
    funcD();
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
  /   \
(B)   (C)
  \    / 
    (D) 
*/