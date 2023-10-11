#include <iostream>
#define N 8
using namespace std;

int  findSmallest(int arr[]){
	int small = arr[0], smallInd;
	for(int i = 0; i <= N; i++){
		if(arr[i] < small){
			small = arr[i];
			smallInd = i;
		}
	}
	return smallInd;
}

int main(){
	int num[] = {1,2,4,5,10,100,2,22};
	
	int ind = findSmallest(num);
	cout << "The smallest value is " << num[ind]
		 << " with index = " << ind << endl;
	
	return 0;
}