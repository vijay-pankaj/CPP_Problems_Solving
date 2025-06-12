/*
14. Profit or Loss :

Explanation:
Profit: If Selling Price > Cost Price → Profit = Selling Price - Cost Price
Loss: If Selling Price < Cost Price → Loss = Cost Price - Selling Price
No Profit or Loss: If Selling Price == Cost Price

Input: Cost Price: 50, Selling Price: 70
Output: Profit: 20

Input: Cost Price: 80, Selling Price: 60
Output: Loss: 20
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int costPrice,sellingPrice;
    cout<<"Enter costPrice: ";
    cin>>costPrice;
    cout<<"Enter sellingPrice: ";
    cin>>sellingPrice;

    //first
    // if(sellingPrice>costPrice)cout<<"profit: "<<sellingPrice-costPrice;
    // if(sellingPrice<costPrice)cout<<"Loss:"<<costPrice-sellingPrice;
    // if(sellingPrice==costPrice)cout<<"No Profit or No Loss";

    //second
    string isProfitOrloss=(sellingPrice!=costPrice)?((sellingPrice>costPrice)?"profit":"Loss"):"No Profit or No Loss";
    cout<<isProfitOrloss;
}