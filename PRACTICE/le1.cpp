#include<iostream>
using namespace std;

int main(){

    int number, remainder, sum=0;
    cout<<"Enter an integer number: ";
    cin>>number;
    while(number!=0){
        remainder=number%10;
        sum=sum+remainder;
        number=number/10;
        if(number!=0){
            cout<<remainder<<" + ";
        }
        else cout<<remainder;
    }

    cout<<" = "<<sum<<endl;

    if(sum%2==0){
        if(sum%4==0&&sum%7==0&&sum%5==0){
            cout<<sum<<" is even number & multiples of 4, 5 and 7";
        }
        else if(sum%5==0&&sum%4==0){
            cout<<sum<<" is even number & multiples of 4 and 5";
        }
        else if(sum%4==0&&sum%7==0){
            cout<<sum<<" is even number & multiples of 4 and 7";
        }
        else if(sum%7==0&&sum%5==0){
            cout<<sum<<" is even number & multiples of 5 and 7";
        }
        else cout<<sum<<" is even number";
        }
    else 
        if(sum%4==0&&sum%7==0&&sum%5==0){
            cout<<sum<<" is odd number & multiples of 4, 5 and 7";
        }
        else if(sum%5==0&&sum%4==0){
            cout<<sum<<" is odd number & multiples of 4 and 5";
        }
        else if(sum%4==0&&sum%7==0){
            cout<<sum<<" is odd number & multiples of 4 and 7";
        }
        else if(sum%7==0&&sum%5==0){
            cout<<sum<<" is odd number & multiples of 5 and 7";
        }
         else cout<<sum<<" is odd number";
    
        return 0;
    }

    
