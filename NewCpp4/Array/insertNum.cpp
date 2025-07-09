#include<iostream>
using namespace std;
int main(){
    int arr[]={5,8,9,11,6};
    int n;
    cout<<"enter number of index: ";
    cin>>n;
    int m=sizeof(arr)/sizeof(arr[0]);
    for( int i=n; i>=m-1; i--){
        arr[i]=arr[i+1];
    }
    // arr[n]=100;
    n--;
int v=sizeof(arr)/sizeof(arr[0]);
cout<<v<<endl;
    for(int i=0; i<m; i++){
        cout<<arr[i]<<" ";
    }

}