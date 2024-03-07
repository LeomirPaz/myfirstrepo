#include<iostream>
using namespace std;

int main(){
	
	int numstart, numend, numsum;
	
	cout << "Input Numstart: ";
	cin >> numstart;
	
	cout << "Input Numend: ";
	cin >> numend;
	
	
	do{
		numsum = numsum + numstart;
		numstart++;
	}while(numstart<=numend);
	
	cout << "The sum is: " << numsum << endl;
	
	return 0;
}