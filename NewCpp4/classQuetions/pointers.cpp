#include<bits/stdc++.h>
using namespace std;
int main(){
    // int age=20;
    // int *p=age;//error: invalid conversion from 'int' to 'int*'
    // int p=&age;//error: invalid conversion from 'int*' to 'int'
    // int *p=&age;
    // cout<<"Address of Age is: "<<p<<endl;//0x61ff08
    // cout<<"value of age: "<<*p<<endl;//20;
    // cout<<"Address of *p:  "<<&p;

    int arr[]={10,20,90,40,50};
    int n=sizeof(arr)/sizeof(arr[0])-1;
    int max=arr[0];
    for(int i=0; i<=n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}