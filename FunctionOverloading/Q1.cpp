// 1. Write overloaded functions to calculate the area of a circle, rectangle, and triangle.
#include <bits/stdc++.h>
using namespace std;
void area(double base, double height, bool istriangle)
{
    if (istriangle)
    {
        cout << 0.5 * base * height;
    }
    else
    {
        cout << "not valid";
    }
}

void area(double length, double width)
{
    cout << length * width;
}

void area(double r)
{
    float pi = 3.14;
    cout << pi * r * r;
}
int main()
{
    cout << " Are of circle is: ";
    area(3);
    cout << "\n Area of reactangle is: ";
    area(22, 2);
    cout << "\n Area of triangle is: ";
    area(4, 2, true);
}