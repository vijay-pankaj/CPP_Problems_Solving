// write a C++ function that takes the coordinates of a point (x, y) as input and 
// uses nested if-else statements to determine in which quadrant the point lies.
#include<bits/stdc++.h>
using namespace std;
string Quadrant(int x,int y){
    if(x>0 && y>0){
        return "first Quatrant";
    }else if(x<0 && y>0){
        return "second Quadrant";
    }else if(x<0 && y<0){
        return "third Quadrant";
    }else if(x>0 && y<0){
        return "fourth Quadrant";
    }else{
        return "center point";
    }
}

int main(){
    int x,y;
    cout<<"enter x: ";
    cin>>x;

    cout<<"enter y: ";
    cin>>y;
    cout<<"According to given coordinates point lies on the: "<<Quadrant(x,y);
}