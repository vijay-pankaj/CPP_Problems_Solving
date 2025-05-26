// 3. 1 2 3 6 11 20 ....
// a=1 b=2 c=3 d =a+b+c
#include<bits/stdc++.h>
using namespace std;
 int tribonacchi(int n){
    int a=1,b=2,c=3;
    cout<< a <<" "<< b <<" "<< c <<" ";
    for(int i=3; i<=n; i++){
        int d=a+b+c;
        cout<< d <<" ";
        a=b;
        b=c;
        c=d;
    }
 }
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    tribonacchi(n);
}