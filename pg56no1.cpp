#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;


int main(){
    float price,total=0;
    cout<<"Enter the price: "<<endl;
    cin>>price;
    while(price!=-1){
        total=total+price;
        cout<<"Enter the price: "<<endl;
        cin>>price;
    }
    cout<<"Total price: "<<total<<endl;
    return 0;
}