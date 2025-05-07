// User se 4 input lena hai agar sum 100 se zyada hota hai
//  to ek function call karna hai jo 1-10 tak ke squares print karega.
//  Agar sum 100 se kam hota hai to ek function call karna hai jo 10 se 1 tak numbers print karega.
#include <bits/stdc++.h>
using namespace std;

void printNum(){
    for(int i=10; i>=1; i--){
        cout<<i<<" ";
    }
}


void squeres()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i * i<<" ";
    }
}

void isSum(int num1, int num2, int num3, int num4)
{
    int sum = num1 + num2 + num3 + num4;
    if (sum > 100)
    {
        squeres();
    }
    else if (sum<100){
        printNum();
    }
}
int main()
{
    int num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    isSum(num1, num2, num3, num4);
}