#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,mul=1;
    cout<<"enter number: ";
    cin>>n;
    while(n){
        int rem=n%10;
        sum+=rem;
        mul*=rem;
        n/=10;
    }
    cout<<"sum of digit: "<<sum<<endl;
    cout<<"Multiplication of digit: "<<mul;
}