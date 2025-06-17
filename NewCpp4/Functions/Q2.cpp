#include<bits/stdc++.h>
using namespace std;

int maxNum(int n1,int n2,int n3){
    int max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    return max;
}
int main(){
    int n1,n2,n3;
    cout<<"Enter first num: ";
    cin>>n1;

    cout<<"Enter Second num: ";
    cin>>n2;

    cout<<"Enter third num: ";
    cin>>n3;

    cout<<maxNum(n1,n2,n3);
}