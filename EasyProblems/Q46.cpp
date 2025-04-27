// Take an integer input and check if it is divisible by 3 and 5, then print "Yes" or "No".
#include<bits/stdc++.h>
using namespace std;


void checkDivisiblity(int num){
    if(num%3==0&&num%5==0)cout<<"yes";
    else cout<<"NO";
}

int main(){
int num;
cout<<"enter number: ";
cin>>num;
checkDivisiblity(num);

}