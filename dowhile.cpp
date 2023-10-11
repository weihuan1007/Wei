#include<iostream>
using namespace std;

int main(){
    int sum=0,num,counter=0;
    cin>>num;
    do
    {
        counter++;
        cin>>num;
        sum=sum+num;

    } while (counter<2);
    
        cout<<"Sum: "<<sum<<endl;
    
    return 0;
}