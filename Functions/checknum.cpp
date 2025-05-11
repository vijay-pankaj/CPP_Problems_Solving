#include<bits/stdc++.h>
using namespace std;
void  isNumpositiveNegtive(int n){
    string result = (n>0)?"positive":(n<0)?"negative":"zero";
    cout<<result;
}
int main(){
    // isNumpositiveNegtive(2);
    // isNumpositiveNegtive(-9);
    isNumpositiveNegtive(0);
}