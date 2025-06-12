#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int count=0;
    while(n){
        n/=10;
        count++;
    }
    cout<<count;
}