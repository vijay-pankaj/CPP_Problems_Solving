/*
4. Area of a Rectangle: Write a function that calculates the area of a rectangle using length and breadth.
Input: 5 8
Output: Area: 40
*/
#include<iostream>
using namespace std;

int areaOfReactangle(int w,int b){
    return w*b;
}

int main(){
    int length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;  
    cout<<areaOfReactangle(length,breadth);  
}
