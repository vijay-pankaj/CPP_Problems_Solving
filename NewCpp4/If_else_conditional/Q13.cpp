/*
13. Electricity Bill Calculation :

Rate Structure:
Up to 100 units: ₹5 per unit
101 to 200 units: ₹6 per unit
201 and above: ₹8 per unit

Input: Units: 250
Output: Total Bill: ₹2000

Input: Units: 90
Output: Total Bill: ₹450
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int unit;
    cout<<"Enter units: ";
    cin>>unit;

    //first
    if(unit>0&&unit<=100)cout<<unit*5;
    if(unit>100&&unit<=200)cout<<unit*6;
    if(unit>200)cout<<unit*8;

    //second
    // int bill=(unit>=100)? ((unit>100&&unit<=200)?unit*6:unit*8):unit*5;
    // cout<<bill;

}