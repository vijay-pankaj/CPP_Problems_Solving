
#include<bits/stdc++.h>
using namespace std;
bool isEven(int n){
    // if(n%2==0)return "Even";
    // else return "odd";
    return n%2==0;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    // cout<<isEven(n);
    if(isEven(n))cout<<"Even";
    else cout<<"Odd";
}