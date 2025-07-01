#include<iostream>
using namespace std;

void print(int arr[],int k){
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
}

bool isPalindrome(int n){
    int rev=0,originalNum=n;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    return originalNum==rev;
}

int PalindromeCount(int arr[]){
    int count=0;
    int k=0;
    int *temp=new int[k];
for(int i=0; i<5; i++){
    if(isPalindrome(arr[i])){
        count++;
        temp[k]=arr[i];
        k++;
    }
}
print(temp,k);
return count;
}
int main(){
    int arr[]={121,123,33,43,1331};
    cout<<PalindromeCount(arr);
}