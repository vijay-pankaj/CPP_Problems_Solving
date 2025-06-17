#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=1, k;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i-1){
            cout<<"  ";
            j++;
        }
        k=1;
        while(k<=n-i+1){
            cout<<"* ";
            k++;
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