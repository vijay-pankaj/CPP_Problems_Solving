#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1;
    cout<<"enter n: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*
 
* 
* * 
* * * 
* * * * 
* * * * * 

*/