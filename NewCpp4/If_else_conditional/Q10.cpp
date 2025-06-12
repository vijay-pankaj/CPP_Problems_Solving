/*

10. Triangle Validity :

Input: 60 60 60
Output: Valid Triangle

Input: 90 30 50
Output: Invalid Triangle
*/
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int a1,a2,a3;
    cout<<"Enter angles";
    cin>>a1>>a2>>a3;

    //first
    // if((a1+a2+a3)!=180){
    //     cout<<"invalid Triangle";
    // }else{
    //     cout<<"valid Triangle";
    // }
    

    //second
    string isValid=((a1+a2+a3)==180)?"Valid Triangle":"Not Valid Triangle";
    cout<<isValid;
}


