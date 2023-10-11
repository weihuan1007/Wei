#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;

    if(num1<num2){
        do{
            cout<<num1;
            cout<<" ";
            num1++;
        }
        while(num1<=num2);
    }
    else if(num1>num2){
        do{
            cout<<num1;
            cout<<" ";
            num1--;
        }
        while(num1>=num2);
        
    }
    else cout<<"Error"<<endl;

    return 0 ;
}