#include <bits/stdc++.h>
using namespace std;
void funcN()
{
    cout << "function N start\n ";
    cout << "funtion N End\n";
}
void funcM()
{
    cout << "function M start\n ";

    cout << "funtion M End\n";
}
void funcL()
{
    cout << "function L start\n ";
    funcM();
    funcN();
    cout << "funtion L End\n";
}
void funcK()
{
    cout << "function K start\n ";
    cout << "funtion K End\n";
}
void funcJ()
{
    cout << "function J start\n ";
    funcK();
    funcL();
    cout << "funtion J End\n";
}
void funcI()
{
    cout << "function I start\n ";
    funcJ();
    cout << "funtion I End\n";
}
void funcC()
{
    cout << "function C start\n ";
    funcI();
    cout << "funtion C End\n";
}
void funcH()
{
    cout << "function H start\n ";

    cout << "funtion H End\n";
}
void funcB()
{
    cout << "function B  start\n ";
    funcH();
    cout << "funtion B End\n";
}
void funcG()
{
    cout << "function G start\n ";

    cout << "funtion G End\n";
}
void funcF()
{
    cout << "function F start\n ";
    cout << "funtion F End\n";
}
void funcR()
{
    cout << "function R start\n ";
    cout << "funtion R End\n";
}
void funcQ()
{
    cout << "function Q start\n ";
    cout << "funtion Q End\n";
}
void funcP()
{
    cout << "function P start\n ";
    funcQ();
    funcR();
    cout << "funtion P End\n";
}
void funcO()
{
    cout << "function O start\n ";
    cout << "funtion O End\n";
}
void funcE()
{
    cout << "function E start\n ";
    funcO();
    funcP();
    cout << "funtion E End\n";
}

void funcD()
{
    cout << "function D start\n ";
    funcE();
    funcF();
    cout << "funtion D End\n";
}
void funcA()
{
    cout << "function A start\n ";
    funcD();
    funcG();
    cout << "funtion A End\n";
}

int main()
{
    cout << "Main function start\n, ";
    funcA();
    funcB();
    funcC();
    cout << "main function End\n";
}