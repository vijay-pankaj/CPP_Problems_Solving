// Implement a C++ function that takes a person's 
// income as an argument and returns their tax bracket using if-else statements
/*
New Regime Tax Rates for FY 2025-26: 
Up to Rs.4 lakh  - NIL 
Rs. 4 lakh - Rs.8 lakh - 5% 
Rs.8 lakh - Rs.12 lakh - 10%
Rs.12 lakh - Rs.16 lakh - 15% 
Rs.16 lakh - Rs.20 lakh - 20% 
Rs.20 lakh - Rs.24 lakh - 25% 
Above Rs.24 lakh - 30%
*/
#include<bits/stdc++.h>
using namespace std;
float IncomeTax(float salary){
    float tax=0;
    if(salary<=400000){
        return tax;
    }else if(salary>=400000 && salary<=800000){
        return tax=(salary*5)/100;
    }else if(salary>800000 && salary<=1200000){
        return tax=(salary*10)/100;
    }else if(salary>1200000&&salary<=1600000){
        return tax=(salary*15)/100;
    }else if(salary>160000 && salary<=2000000){
       return tax=(salary*20)/100;
    }else if(salary>2000000&&salary<=2400000){
       return tax=(salary*25)/100;
    }else{
        return tax=(salary*30)/100;
    }

}
int main(){
    float salary;
    cout<<"enter sallery: ";
    cin>>salary;
if(salary<0){
    cout<<"enter valid details ";
}else{
float totalTax=IncomeTax(salary);
cout<<"here is you total tax on your salary: "<<totalTax;
}
}
