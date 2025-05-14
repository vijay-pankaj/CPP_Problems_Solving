// 11. Overload a function to find the square of an integer, a float, and a double
#include <bits/stdc++.h>
using namespace std;

void square(double num)
{
    cout << "Enter number(Double): "<<endl;
    cin >> num;
    double sqaure = num * num;
    cout << "Square of num(Double)is: " << sqaure << endl;
}

void square(float num)
{
    cout << "Enter number(float): "<<endl;
    cin >> num;
    float sqaure = num * num;
    cout << "Square of num(float)is: " << sqaure << endl;
}

void square(int num)
{
    cout << "Enter number(integer): "<<endl;
    cin >> num;
    int sqaure = num * num;
    cout << "Square of num(integer)is: " << sqaure << endl;
}

int main()
{
    int num;
    float n;
    double m;
    square(num);
    square(n);
    square(m);
}