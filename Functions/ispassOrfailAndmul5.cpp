// 54. Develop a C++ function that takes a score as input and uses nested if-else statements to determine 
// if it is passing or failing and if it is a multiple of 5.
#include<bits/stdc++.h>
using namespace std;

string isPassAndMul5(int score){
    int totalmarks=600;
    if(score>0 && score<=totalmarks){
        if(score>(totalmarks/2)&&score<=totalmarks){
            if(score%5==0){
                return "passed and score is multiple of 5";
            }else{
                return "passed but score is not multiple of 5";
            }
        }else{
            if(score%5==0){
                return "fail but score is multiple of 5";
            }else{
                return "fail and  score also not multiple of 5";
            }
        }
    }else{
        return "enter score between 1-totalmarks(600)";
    }
   
}

int main(){
    int score;
    cout<<"enter score: ";
    cin>>score;
    cout<<isPassAndMul5(score);
}