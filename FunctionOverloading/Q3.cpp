// 3. Overload a function to calculate the volume of a cube, cuboid, and cylinder.
#include <bits/stdc++.h>
using namespace std;
void volume(double r, double h)
{
    int pi = 3.14;
    cout << "\n volume of cylinder is :" << pi * r * r * h;
}
void volume(double l, double b, double h)
{
    cout << "\n volume of cuboid is: " << l * b * h;
}
void volume(double s)
{
    cout << "volume of cube is: " << s * s * s;
}
int main()
{
    volume(5);
    volume(2, 4, 5);
    volume(3, 4);
}