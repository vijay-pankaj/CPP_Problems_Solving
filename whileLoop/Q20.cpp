#include<bits/stdc++.h>
using namespace std;

int countEachDigit(int n){
    for(int i=0; i<=n; i++){
        int count=0;
        for(int j=0; j<=n; j++){
            if(i==j){
                count++;
            }
        }
         cout<<i<<count;

    }
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    countEachDigit(num);
}