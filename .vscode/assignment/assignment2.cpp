#include<iostream>
using namespace std;

void getinfo_men();

int main(){
	char gender;
	cout << "Body Fat Calculator" << endl;
	cout << "\nGender (F @ M): " << gender;
	cin >> gender;
	if ( gender == 'M' || gender == 'm')
		getinfo_men();
}

void getinfo_men(){
	int age, neck, waist;
	float weight, height;
	
	cout << "Age : " << age << endl;
	cin >> age;
	cout << "Weight (kg) : " << weight << endl;
	cin >> weight;
	cout << "Height (cm) : " << height << endl;
	cin >> height; 
	cout << "Neck (cm) : " << neck << endl;
	cin >> neck;
	cout << "Waist (cm) : " << waist << endl;
	cin >> waist;  
}