// 52. Develop a C++ function that takes a phone number as input and uses nested if-else statements to determine
//  if it is a valid number, and if it is a mobile, landline, or international number.
#include<bits/stdc++.h>
using namespace std;

bool isDigit(string number) {
    for (auto it : number) {
        if (it < '0' || it > '9') {
            return false;
        }
    }
    return true;
}

bool isValidNumber(string number) {
    if (number.length() < 10) {
        return false;
    }
    return true;
}

string NumberConfirmation(string number){
    if(isDigit(number)){
        if(isValidNumber(number)){
            if(number.length()==10){
                return "it is a valid number";
            }else if(number.length()>10&&number.length()<=15) {
                return "landline number";
            }
        }
    }else if(number[0] == '+'){
        string temp = number.substr(1);
        if(isDigit(temp)){
            if(isValidNumber(temp)){
                return "International number";
            }
        }
    }

    return "Invalid number";
}

int main(){
    string number;
    cout<<"Enter number: ";
    getline(cin,number);
    cout<<NumberConfirmation(number);
}
