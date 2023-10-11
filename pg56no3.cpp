#include<iostream>
using namespace std;

int main(){
    double num,total=0,x=0;

    cout<<"Enter number: "<<endl;
    cin>>num;
    
    while(num!=0){
        total=total+num;
        cin>>num;
        x++;
    }

    cout<<"Total: "<<total<<endl;
    double average=total/x;
    cout<<"Average: "<<average<<endl;

    return 0;
}