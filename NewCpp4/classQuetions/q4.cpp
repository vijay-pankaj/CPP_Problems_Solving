#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0;
    cout<<"enter number: ";
    cin>>n;
    for(int i=2; i<n; i++){
        int count=0;
        for(int j=1; j<i;j++){
            if(i%j==0)count++;
        }
        if(count==1){
            // cout<<i;
            m++;
        }
    }
    cout<<m;
}