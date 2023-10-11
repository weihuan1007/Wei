#include<iostream>
using namespace std;

int main(){
    float x=0,total=0;
    double average,num;
    while(x<3){
        cout<<"Enter number: "<<endl;
        cin>>num;
        total=total+num;
        x++;

    }
    cout<<"Total: "<<total<<endl;
    average=total/x;
    cout<<"Average: "<<average<<endl;
    cout<<"Count: "<<x;
    return 0;
}

