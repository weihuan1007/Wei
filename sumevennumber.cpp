#include <iostream>
using namespace std;

int main(){
    int x=2,total=0;
    while(x<=100){
        if(x%2==0){
            total=total+x;
        }
        x++;
    }
    cout<<"Total: "<<total;
}