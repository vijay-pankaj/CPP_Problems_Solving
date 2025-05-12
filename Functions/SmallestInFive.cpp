// Take 5 integers as input and print the smallest among them.
#include<bits/stdc++.h>
using namespace std;
    void smallest (int num1,int num2,int num3,int num4,int num5){
    // cout<<"enter five number: ";
    // cin>>num1>>num2>>num3>>num4>>num5;

    // cout<<"enter num1: ";
    // cin>>num1;

    // cout<<"enter num2: ";
    // cin>>num2;

    // cout<<"enter num3: ";
    // cin>>num3;

    // cout<<"enter num4: ";
    // cin>>num4;

    // cout<<"enter num5: ";
    // cin>>num5;

int smallest =num1;
if(num2<smallest)smallest=num2;
if(num3<smallest)smallest=num3;
if(num4<smallest)smallest=num4;
if(num5<smallest)smallest=num5;
cout<<"smallest number in given number is : "<<smallest;
}
int main(){
    // smallest(12,3,4,5,10);
int num1,num2,num3,num4,num5;
    cout<<"enter five number: ";
    cin>>num1>>num2>>num3>>num4>>num5;

    smallest(num1,num2,num3,num4,num5);


}

