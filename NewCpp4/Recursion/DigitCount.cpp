#include<iostream>
using namespace std;

int DigitCount(int num){
    static int count=0;
    if(num==0){
        return count;
    }
    count++;
    return DigitCount(num/10);

}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
   cout<< DigitCount(num);
}