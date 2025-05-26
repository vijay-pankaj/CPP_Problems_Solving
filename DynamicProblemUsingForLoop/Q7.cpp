// 7.1 2 4 7 12 20...
// ● Variables: a=1, b=2, c=a+b+1
// ● Formula: The additon between consecutive terms increases by 1.
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int a=1,b=2;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<=6; i++){
        int c=a+b+1;
        cout<<c<<" ";
        a=b;
        b=c;
    }
 }