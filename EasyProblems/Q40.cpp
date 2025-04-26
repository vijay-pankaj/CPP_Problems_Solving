// Take 15 float inputs from the user and print them.
#include<bits/stdc++.h>
using namespace std;
int main(){
    float number[15];
    cout<<"enter 10 numbers";
    for(int i=1; i<=15; i++){
        cin>>number[i];
    }

    cout<<"given numbers is : ";
    for(int i=1; i<=15; i++){
        cout<<fixed<<setprecision(2)<<number[i]<<" ";
    }
}
