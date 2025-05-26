// 2. 1 2 2 4 8 32 ....
// a=1 b=2 c =a*b
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1,b=2;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=5; i++){
        int c=a*b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
}