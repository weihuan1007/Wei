#include<iostream>
using namespace std;

double avg(int a,int b,int c);

int main(){
    int n1,n2,n3;
    double average;
    cout<<"Enter 3 numbers: "<<endl;
    cin>>n1>>n2>>n3;
    average=avg(n1,n2,n3);
    cout<<"Average: "<<average<<endl;    

    return 0;
}

double avg(int a,int b,int c){
    double sum,result;
    sum=a+b+c;
    result=sum/3;
    return result;
}