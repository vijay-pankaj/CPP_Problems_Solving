// 10.Double Product Sequence
// ● Sequence: 1, 3, 6, 36 ...
// ● Formulation: a = 1, b = 3, c = a * b * 2
// ● Problem: Find the nth term where each term is the product of the previous two, doubled.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=3;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=4; i++){
        int c=a*b*2;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}