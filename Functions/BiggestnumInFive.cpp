#include<bits/stdc++.h>
using namespace std;
void BiggestNum(int num1,int num2,int num3,int num4,int num5){
    int biggest=num1;
    if(num2>biggest)biggest=num2;
    if(num3>biggest)biggest=num3;
    if(num4>biggest)biggest=num4;
    if(num5>biggest)biggest=num5;
cout<<"The biggest number is: "<<biggest;
}
int main(){
    BiggestNum(5,4,8,9,2);
}