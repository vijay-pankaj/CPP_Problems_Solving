#include<bits/stdc++.h>
using namespace std;
void triangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i)cout<<"* ";
            else cout<<" ";
        }
        cout<<"\n";
    }
}
void revtriangle(int n){
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j<=i)cout<<"* ";
            else cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    // triangle(5);
/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/

revtriangle(5);
/*

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
}