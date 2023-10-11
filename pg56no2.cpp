#include<iostream>
using namespace std;

int main(){

    
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    double temp[size];

    for(int i=0;i<size;i++){
        cout<<"Enter "<<size<<" people's temperature: "<<endl;
        cin>>temp[i];
    }
    cout<<"No.\tTemperature"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<i<<"\t"<<temp[i]<<endl;
    }

    return 0;
}