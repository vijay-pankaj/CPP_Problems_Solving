#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;   
    }
}
/*
* * * * * 
* * * * 
* * * 
* * 
* 

*/