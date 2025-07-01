/*
10. Find the Average of Three Numbers: Write a function that calculates and returns the average of three numbers.
Input: 10 20 30
Output: Average: 20
*/
#include<iostream>
using namespace std;
int averageOf(int n1,int n2,int n3){
    return (n1+n2+n3)/3;
}
int main(){
    int num1,num2,num3;
    cout<<"Enter number: ";
    cin>>num1>>num2>>num3; 
    cout<<"Average of number is: "<<averageOf(num1,num2,num3);
}