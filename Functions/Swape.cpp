#include<bits/stdc++.h>
using namespace std;
void swapeVar(int a,int b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"\nafter swape value of a is: "<<a<<"\n"<<"after swape value of b is: "<<b;

    
}
int main(){
    int a,b;
    cout<<"enter a and b value\n";
    cin>>a>>b;
    cout<<"before value of a is: "<<a<<" before value of b is: "<<b;

    swapeVar(a,b);
}