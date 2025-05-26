// 8.Modifi ed Tribonacci Sequence
// ● Sequence: 1, 1, 2, 4, 7, 13, ...
// ● Formulation: a = 1, b = 1, c = 2, d = a + b + c
// ● DP Problem: Solve for the nth term where each term is the sum of the previous three terms.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 1, b = 1, c = 2;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=3; i<=6; i++){
        int d=a+b+c;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
    }
}