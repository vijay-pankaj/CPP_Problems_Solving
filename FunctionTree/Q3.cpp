#include <bits/stdc++.h>
using namespace std;

void funcE()
{
    cout << "Function E start\n";
    cout << "Function E End\n";
}
void funcI()
{
    cout << "Function I start\n";
    cout << "Function I End\n";
}
void funcH()
{
    cout << "Function H start\n";
    cout << "Function H End\n";
}

void funcG()
{
    cout << "Function G start\n";
    cout << "Function G End\n";
}
void funcF()
{
    cout << "Function F start\n";
    funcG();
    funcH();
    funcI();
    cout << "Function F End\n";
}

void funcD()
{
    cout << "Function D start\n";
    funcF();
    cout << "Function D End\n";
}

void funcC()
{
    cout << "Function C start\n";
    cout << "Function C End\n";
}

void funcB()
{
    cout << "Function B start\n";
    funcC();
    funcD();
    funcE();
    cout << "Function B End\n";
}

int main()
{
    cout << "main Function start\n";
    funcB();
    cout << "main Function end\n";
}

/*         main
           (A)
            |
           (B)
         /  | \
        (C)(D)(E)
            |
           (F)
         /  |  \
        (G) (H) (I)
*/