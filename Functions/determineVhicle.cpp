// 51. Create a C++ function that takes the number of passengers as input and uses nested if-else statements to
// determine if a car, van, or bus is needed, and if it is within the legal limit
#include<bits/stdc++.h>
using namespace std;

string determineVhicle(int p){
    if(p>=1 && p<=5){
        return "car";
    }else if(p>5 && p<=8){
        return "van";
    }else if(p>8 && p<=60){
        return "Bus";
    }else{
        return " to enter number of passenger in  limit and limit is 1-60 passenger";
    }
}
int main(){
    int p;
    cout<<"Enter number of passenger: ";
    cin>>p;

    cout<<"According to number of passenger you need  "<<determineVhicle(p);
    
}