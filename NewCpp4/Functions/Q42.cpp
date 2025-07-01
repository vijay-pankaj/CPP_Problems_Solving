/*
12. Convert Celsius to Fahrenheit: Write a function that converts temperature in Celsius to Fahrenheit.
Input: 25
Output: Fahrenheit: 77
*/
#include<iostream>
using namespace std;

int celtofahrebheit(int t){
   return (t * 9 / 5) + 32;
}

int main(){
    int temp;
    cout<<"Enter temp in celsius: ";
    cin>>temp;
    cout<<celtofahrebheit(temp);
}