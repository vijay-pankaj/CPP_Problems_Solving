/*
13. Find the GCD of Two Numbers: Write a function that returns the GCD (greatest common divisor) of two numbers using a loop.
Input: 36 60
Output: GCD: 12
*/
#include<bits/stdc++.h>
using namespace std;

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
   int ans =  greatestCommonDivisor(a,b);
   cout<<ans;
}