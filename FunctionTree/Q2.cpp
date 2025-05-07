#include <bits/stdc++.h>
using namespace std;
void funcJ()
{
    cout << "Function J start\n";
    cout << "Function J End\n";
}

void funcI()
{
    cout << "Function I start\n";
    cout << "Function I End\n";
}
void funcD()
{
    cout << "Function D start\n";
    funcI();
    funcJ();
    cout << "Function D End\n";
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

void funcC()
{
    cout << "Function C start\n";
    funcG();
    funcH();
    cout << "Function C End\n";
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

void funcB()
{
    cout << "Function B start\n";
    funcE();
    funcF();
    cout << "Function B End\n";
}

void funcA()
{
    cout << "Function A start\n";
    funcB();
    funcC();
    funcD();
    cout << "Function A End\n";
}

int main()
{
    cout << "Main Function start\n";
    funcA();
    cout << "Main Function End\n";
}

/*           main
               |
              (A)
          /    |    \
         (B)  (C)   (D)
        /  \   /\    /\
      (E)  (F)(G)(H)(I)(J)
*/