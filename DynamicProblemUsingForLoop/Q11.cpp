// 11. Geometric Progression
// ● Sequence: 1, 3, 9, 27, 81, ...
// ● Formulation: a = 1, b = a * 3
// ● Problem: Calculate the nth term where each term is triple the previous.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1;
    cout<<a<<" ";
    for(int i=2; i<=5; i++){
        int b=a*3;
        cout<<b<<" ";
        a=b;
    }
 }