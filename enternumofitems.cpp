#include <iostream>
using namespace std;

int main(){
    int num,x=0;
    double price,average,total=0;
    cout<<"Enter number of items: "<<endl;
    cin>>num;
    cin.ignore();

    while(x<num){
        cout<<"Enter the price: "<<endl;
        cin>>price;
        total=total+price;
        x++;
    }

    average=total/x;
    cout<<"Total\tAverage"<<endl;
    cout<<"----------------------"<<endl;
    cout<<total<<"\t"<<average<<endl;

    return 0;
}