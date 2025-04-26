// Calculate the average of 5 numbers entered by the user and print the result.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int sum=0,count=0;
    for(int i=1; i<=5; i++){
        cout<<"enter number:";
        cin>>n;
        sum+=n;
        count++;
        
    }
    cout<<"Average of entered number : "<<sum/count;

}
