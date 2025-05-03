// Write a C++ function that takes an integer as input and uses nested 
// if-else statements to determine if the number is a perfect cube or not.
#include<bits/stdc++.h>
using namespace std;

bool isPerfctCube(int n){
    for(int i=1; i<=n; i++){
        if(i*i*i==n){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    if(isPerfctCube(n)){
        cout<<"given number is perfect cube";
    }else{
        cout<<"given number is not perfect cube ";
    }

}