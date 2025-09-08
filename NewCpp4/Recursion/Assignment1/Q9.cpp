/*
9. Find the Largest of Three Numbers :
-> Task: Write a recursive function to find the largest of three numbers.
*/
#include<iostream>
using namespace std;
int maxOfTwo(int n1,int n2){
    if(n1==n2)return n1;
    if(n1>n2)return n1;
    else return n2;
    
}
int largestofthree(int n1,int n2,int n3){
    return maxOfTwo(n1, maxOfTwo(n2,n3));
}

int main(){
    int num1,num2,num3;
    cout<<"Enter first Vlue: ";
    cin>>num1;
    cout<<"Enter Second Vlue: ";
    cin>>num2;
    cout<<"Enter Third Vlue: ";
    cin>>num3;
    cout<<largestofthree(num1,num2,num3);
}