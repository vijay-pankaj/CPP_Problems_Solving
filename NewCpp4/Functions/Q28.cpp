/*
13. Find the GCD of Two Numbers: Write a function that returns the GCD (greatest common divisor) of two numbers using a loop.
Input: 36 60
Output: GCD: 12
*/
#include<bits/stdc++.h>
using namespace std;
int greatestcommondivisor(int a,int b)
{
    int c;
    while(b%a)
    {
        c = b%a;
        a = b;
        b = c;
    }
   return a;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
   int ans =  greatestcommondivisor(a,b);
   cout<<ans;
}