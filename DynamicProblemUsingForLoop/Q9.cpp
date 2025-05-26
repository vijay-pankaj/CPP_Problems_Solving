// 9.Sum of Odd and Even Index Terms
// ● Sequence: 1, 2, 2, 4, 4, 8, 8,16,16, 32, 32 ...
// ● Formulation: a = 1, b = a + even index numbers
// ● DP Problem: Use dynamic programming to calculate the nth term where the pattern is determined by the sum of even and odd indexed numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=2;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=6;i++ ){
        a=b;
        cout<<a<<" ";
        b=b*2;
        cout<<b<<" ";
    }
 }
