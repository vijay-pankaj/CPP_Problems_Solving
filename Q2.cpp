// 2.Count how many times a given character appears in a string Input: "programming", char = 'g' Output: 2
#include<bits/stdc++.h>
using namespace std;
 int countSpecificChar(string str,char ch){
    int count=0;
    for(auto it : str){
        if(it==ch){
            count++;
        }
    }
    return count;
 }


int main(){
    string str;
    char ch;
    cout<<"Enter a string : ";
    getline(cin,str);
    cout<<"Enter a specific character: ";
    cin>>ch;
    cout<<countSpecificChar(str,ch);

}