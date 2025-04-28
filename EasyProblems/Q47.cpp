// Take 10 integers and print their sum.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,sum=0;
    for(int i=1; i<=10; i++){
        cout<<"enter number: ";
        cin>>num;
        sum+=num;
    }
    cout<<"Sum of numbers is : "<<sum;
}