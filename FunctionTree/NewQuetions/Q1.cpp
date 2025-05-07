// User se 3 input lena hai aur agar unka average 50 se zyada hai
//  to ek function call karna hai jo 20-30 print karega,
//  agar average 50 se kam hai to dusra function call karna hai jo 1-20 print karega.
#include<bits/stdc++.h>
using namespace std;
void func2(){
    for(int i=1; i<=20; i++){
        cout<<i<<" ";
    }
}
void func1(){
    for(int i=20; i<=30; i++){
        cout<<i<<" ";
    }
}

int main(){
    int num1,num2,num3;
    cout<<"Enter three number: ";
    cin>>num1>>num2>>num3;
    int average =0;
    average=(num1+num2+num3)/3;
    if(average>=50){
        func1();

    }else{
        func2();
    }
}