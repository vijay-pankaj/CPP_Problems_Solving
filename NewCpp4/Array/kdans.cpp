#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={3,4,9,2};
    int maxSum=INT_MIN;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
            // int sum=0;
        for(int j=i; j<n; j++){
            int sum=0;
            // for(int k=j; k<n; k++){
            //     cout<<arr[k];
            // }
            for(int k=i; k<=j; k++){
                // cout<<arr[k];
                sum+=arr[k];
            }

            // cout<<endl;
            // cout<<sum<<endl;
            if(sum>maxSum)maxSum=sum;

        }
            // cout<<sum<<endl;
        // cout<<endl;
    }
    cout<<maxSum;
}