#include<bits/stdc++.h>
using namespace std;
void checkEligiblity(int age ,int experince){
    if(age>=18 &&experince>=2)cout<<"you are eligible to work ";
    else cout<<"you are not eligible";

}
int main(){
    // checkEligiblity(18,3);
    // checkEligiblity(12,3);
    checkEligiblity(19,1);
}