#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1, k;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i){
            cout<<"  ";
            j++;
        }
        k=j;
        while(k<=n){
            cout<<"* ";
            k++;
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