// 1.Count vowels in a string Input: "hello world" Output: 3
#include<bits/stdc++.h>
using namespace std;
int countVowels(string str){
    int count=0;
    for(auto it : str){
        if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||
            it=='A'||it=='E'||it=='I'|| it=='O'||it=='U'){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    cout<<countVowels(str);
}