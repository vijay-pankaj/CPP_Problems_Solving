// Develop a C++ function that takes the quantity of items purchased as an argument and returns 
// the total cost after applying a discount based on the quantity using if-else statements.
#include<bits/stdc++.h>
using namespace std;
float DiscountOrNot(int n){
    if(n>=1&&n<=4){
        return n*1000;
    }else if(n>=5&&n<10){
       return (n*1000)-((n*1000)*5)/100;
    }else{
        return (n*1000)-((n*1000)*10)/100;
    }

}

int main(){
    int i;
    //lets each itemp worth 1000rs if buyer buy 5 item gate 5% off if buyer buy 10items then gate 10% off
    cout<<"how many item buy: ";
    cin>>i;
    if(i<0){
        cout<<"enter positive number ";
    }else{
        int totalamount=DiscountOrNot(i);
        cout<<"total amount to pay: "<<totalamount;
        
    }
}