/*
9. Largest of Three Numbers :

Input: 15 25 10
Output: Largest: 25

Input: 7 4 9
Output: Largest: 9

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;
    int max=n1;

    //first
    // if(n2>n1)max=n2;
    // if(n3>n2)max=n3;
    // cout<<max;

    //second
    // if(n1>n2){
    //     if(n1>n3){
    //         cout<<"max is: "<<n1;
    //     }
    // }else if(n2>n3){
    //     cout<<"max is: "<<n2;
    // }else{
    //     cout<<"max is: "<<n3;
    // }

    //third
    // int maxNUm=(n1>n2&&n1>n3)?n1:(n2>n3)?n2:n3;
    // cout<<"maximum number is: "<<maxNUm;
}
