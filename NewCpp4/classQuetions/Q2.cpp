#include<iostream>
using namespace std;

void print(int arr[],int k){
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}

int perfectNumber(int arr[]){
    int count=0;
    int k=0;
    int *temp=new int[k];
    for(int i=0; i<5; i++){
        int sum=0;
            for(int j=1; j<arr[i]; j++){
                
                if(arr[i]%j==0){
                    sum+=j;
                }
            }
            if(arr[i]%sum==0){
                count++;
                temp[k]=arr[i];
                k++;
            }
    }
    print(temp,k);
    return count;
}

int main(){
    int arr[]={14,45,6,28,496};
    cout<<perfectNumber(arr);
    
}