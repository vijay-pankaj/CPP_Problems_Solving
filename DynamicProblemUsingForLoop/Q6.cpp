// 6. there are four variables a = 1 b= 2 c= 3 d=4
// formulate 1 2 3 4 5 7 9 12 16 and so on
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=2,c=3,d=4;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
    for(int i=4; i<=9; i++){
        int e=b+c;
        cout<<e<<" ";
        b=c;
        c=d;
        d=e;
    }
}