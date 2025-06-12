/*
5. Grade Classification :

Score ≥ 90: Grade A
Score ≥ 75 and < 90: Grade B
Score ≥ 50 and < 75: Grade C
Score ≥ 35 and < 50: Grade D
Score < 35: Fail with limits

Input: 85
Output: Grade: B

Input: 60
Output: Fail
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int score;
    cout<<"Enter number: ";
    cin>>score;
    // first
    // if(score>=90)cout<<"Grade A";
    // if(score>=75 && score<90)cout<<"Grade B";
    // if(score>=50 && score<75)cout<<"Grade C";
    // if(score>=35&&score<50)cout<<"Grade D";
    // if(score<35)cout<<"Fail";
    
    //second
    // if(score>35){
    //     if(score>=90)cout<<"Grade A";
    //     else if(score>=75&&score<90)cout<<"Grade B";
    //     else if(score>=50&&score<75)cout<<"Grade C";
    //     else if(score>=35&&score<50)cout<<"Grade D";
    // }else{
    //     cout<<"Fail";
    // }
    string Grade=(score>35)?((score>=90)?"Grade A":(score>=75&&score<90)?"Grade B":(score>=50&&score<75)?"Grade C":"Grade D"):"Fail";
    cout<<Grade;
}