// Write a C++ function that takes the number of days a book is overdue and returns the fine using if-else statements
#include<bits/stdc++.h>
using namespace std;
int fineOnOverdue(int d){
    int fine=0;
    // lets only 5days for a book else 10rs/day penalty
    if(d<=5){
        return fine;
    }else if(d>5){
        return 10*(d-5);
    }

}
int main(){
    int d;
    cout<<"enter number of days: ";
    cin>>d;
    if(d<0){
        cout<<"enter a positive number ";
    }
    int totalpay=fineOnOverdue(d);
    cout<<"you have to pay: "<<totalpay;
    
}