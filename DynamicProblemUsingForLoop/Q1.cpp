// 1. 1 1 2 3 5 8 13 .....
// a=1 b=1 c =a+b
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int a=1,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=10; i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
 }