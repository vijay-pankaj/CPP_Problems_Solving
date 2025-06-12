/*
3. Largest of Two Numbers :

Input: 12 20
Output: Largest: 20

Input: 5 3
Output: Largest: 5
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter number1: ";
    cin>>n1;
    cout<<"Enter number2: ";
    cin>>n2;

    //First
    // if(n1>n2)cout<<"max: "<<n1;
    // if(n1<2)cout<<"max: "<<n2;
    // if(n1==n2)cout<<"Both are Equal ";

    // Second
    // if(n1!=n2){
    //     if(n1>n2)cout<<"max: "<<n1;
    //     else cout<<"max: "<<n2;
    // }else{
    //     cout<<"Both are Equal";
    // }


    // third
    string maxnum=(n1!=n2)?((n1>n2)?"n1 max":"n2 max"):"Both are Equal";
    cout<<maxnum;
}