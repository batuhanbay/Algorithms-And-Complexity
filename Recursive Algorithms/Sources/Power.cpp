#include<iostream>
#include<vector>

using namespace std;

double Power1(double, int);

int main() {

	cout << "Power1: 3^4 =  " << Power1(3, 4) << endl;
	return 0;

} // end-main

// Computes a^n
double Power1(double number, int power) {

	//Base case
	if (power == 0) return 1;
	if (power == 1) return number;

	// Divide and conquer
	int partialResult = Power1(number, power - 1);

	// Merge
	return partialResult * number;

} // end-Power1
