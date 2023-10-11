// Loh Wei Huan A21EC0048
#define Y 8
#include <iostream>
#include <fstream>
using namespace std;

void readFile();

int main(){
	readFile();
	
	return 0;
}

void readFile(){
	double num[Y];
	ifstream input("tempFahrenheit.txt");
	
	while(!input.eof()){
		for(int i = 0; i < Y; i++){
		input >> num[i];
		cout << i << " : " << num[i] << endl;
	}
		
	}
	input.close();
	
}