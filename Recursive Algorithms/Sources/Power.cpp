#include<iostream>
#include<vector>

using namespace std;

double Power1(double, int);
double Power2(double, int);

int main() {

	cout << "Power1: 3^4 =  " << Power1(3, 4) << endl;
	cout << "Power1: 3^4 =  " << Power2(3, 3) << endl;
	return 0;

} // end-main

// Computes a^n
double Power1(double number, int power) {

	// Base case
	if (power == 0) return 1;
	if (power == 1) return number;

	// Divide and conquer
	int partialResult = Power1(number, power - 1);

	// Merge
	return partialResult * number;

} // end-Power1

// Computes a^n
double Power2(double number, int power){

	// Base case
	if (power == 0) return 1;
	if (power == 1) return number;

	// Divide and conquer
	double partialResult = Power2(number, power / 2);

	// Merge
	double result = partialResult * partialResult;
	if (power % 2 == 1) result *= number; // if power is odd, result = result * number
	return result;

}// end-Power2