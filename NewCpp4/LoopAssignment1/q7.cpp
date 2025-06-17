#include<bits/stdc++.h>
using namespace std;
int main(){
    int power,num,result;
    cout<<"Enter power: ";
    cin>>power;
    cout<<"Enter number: ";
    cin>>num;
    while(power>1){
        result=num*num;
        power--;
    }
    cout<<result;
}