// 5. 1 2 3 6 18 .....
// a =1 b=2 c=3 d =c*b
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int a=1,b=2,c=3;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=3; i<=5; i++){
        int d=c*b;
        cout<<d<<" ";
        a=b;
        b=c;
        c=d;
    }
 }