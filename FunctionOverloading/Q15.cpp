// 15. Implement overloaded functions to find the perimeter of a square, a rectangle, and a circle.
#include <bits/stdc++.h>
using namespace std;

void parimeter(int r)
{
    cout << "enter radius of circle: " << endl;
    cin >> r;
    float pi = 3.14;
    cout << "Parimeter of circle is: " << 2 * pi * r << endl;
}

void parimeter(double l, double w)
{
    cout << "Enter length & width of rectangle: " << endl;
    cin >> l >> w;
    cout << "Parimeter of reactangle id: " << 2 * (l + w) << endl;
}

void parimeter(double s)
{
    cout << "Enter side of square: " << endl;
    cin >> s;
    cout << "parimeter of square is : " << 4 * s << endl;
}

int main()
{
    double side, length, width;
    int radius;
    parimeter(side);
    parimeter(length, width);
    parimeter(radius);
}