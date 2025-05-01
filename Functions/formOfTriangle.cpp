// Write a C++ function that takes three angles as input and uses nested if-else statements to determine 
// if they can form a right-angled triangle, an obtuse triangle, or an acute triangle.
/*
right triangles have one 90-degree angle, acute triangles have all angles 
less than 90 degrees, and obtuse triangles have one angle greater than 90 degrees. 
*/
#include<bits/stdc++.h>
using namespace std;

string formOfTriangle(int a1,int a2,int a3){
    if((a1+a2+a3)==180){
         if(a1==90||a2==90||a3==90){
        return "right triangles";
        }else if(a1<90 && a2<90 && a3<90){
            return "acute triangles";
        }else if(a1>90||a2>90||a3>90){
            return "obtuse triangles";
        }
}else{
    return "enter valid angles ";
}
}
int main(){
    int a1,a2,a3;
    cout<<"Enter angles: ";
    cin>>a1>>a2>>a3;

    cout<<formOfTriangle(a1,a2,a3);
}