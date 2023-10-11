#include <iostream>
using namespace std;
 
int main()
{
    int age;
    string first_name,last_name;
    cout<<"Enter your first name: "<<endl;
    getline(cin,first_name);
    cout<<"Enter your last name: "<<endl;
    getline(cin,last_name);
    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Your name : "<<first_name<<" "<<last_name<<endl;
    cout<<"Your age : "<<age;

  return 0; 
}