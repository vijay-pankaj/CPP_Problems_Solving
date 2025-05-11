#include<bits/stdc++.h>
using namespace  std;
void rightHalfTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout<<"* ";
            }else{
                cout<<" ";
            }

        }
        cout<<"\n";
    }
}

void leftHalfTriangle(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=1; j--){
            if(j<=i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}

void revRightHalfTriangle(int n){
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(j<=i)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}

void revLeftHalfTriangle(int n){
    for(int i=n; i>=1; i--){
        for(int j=n; j>=1; j--){
            if(j<=i)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
}


int main(){
    // rightHalfTriangle(5);
 /*
    
*     
* *
* * *
* * * *
* * * * *
*/

 // leftHalfTriangle(5);
    /*
    
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
    
    */

    // revRightHalfTriangle(5);
    /*
    
* * * * * 
* * * *   
* * *     
* *       
*
    
    */

    revLeftHalfTriangle(5);
    /*
    
* * * * * 
  * * * * 
    * * * 
      * * 
        * 
    
    */

}