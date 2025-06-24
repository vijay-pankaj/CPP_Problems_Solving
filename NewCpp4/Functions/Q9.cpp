/*
9. Find Maximum of Two Numbers: Write a function that takes two numbers and returns the maximum.
Input: 5 10
Output: Maximum: 10
*/
#include<bits/stdc++.h>
using namespace std;

int maxNUm(int n1,int n2){
    if(n1>n2)return n1;
    else return n2;
}

int main(){
    int n1,n2;
    cout<<"enter num1: ";
    cin>>n1;

     cout<<"enter num2: ";
    cin>>n2;
    cout<<"maxNum is: "<< maxNUm(n1,n2);

}