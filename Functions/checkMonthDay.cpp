#include<bits/stdc++.h>
using namespace std;
int CheckMonthDay(int n){
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==11){
        return 1;
    }else if(n==4||n==6||n==9||n==11){
        return 0;
    }else if(n==2){
        return -1;
    }
    else{
        return 2;
    }
}
int main(){
    cout<<"Month Code:january=1 february=2 march=3 april=4 may=5 jun=6 july=7 august=8 september=9 october=10 november=11 december=12\n";
     
    int n;
    cout<<"enter month code: ";
    cin>>n;
    if(CheckMonthDay(n)==1){
        cout<<"31 days";
    }else if(CheckMonthDay(n)==0){
        cout<<"30 dyas";
    }else if(CheckMonthDay(n)==-1){
        cout<<"28/29 days";
    }else if(CheckMonthDay(n)==2){
        cout<<"enter valid code";
    }

}
//1,3,5,7,8,10,11;
//4,6,9,11;
//2