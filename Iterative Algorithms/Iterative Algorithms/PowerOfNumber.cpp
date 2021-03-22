#include<iostream>

using namespace std;

int Power1(int, int);
int Power2(int, int);


int main() {
	
	cout << "3^10: " << Power1(3, 10) << endl;
	cout << "3^10: " << Power2(3, 10) << endl;
	system("pause");

} // end-main

int Power1(int number, int power) {

	if (power == 0) return 1;
	int realPower = 1;
	while (power > 0)
	{
		realPower *= number;
		power--;
	} // end-while

	return realPower;
} // end-Power1

int Power2(int number, int power) {

	if (power == 0) return 1;
	int realPower = 1;
	int currentPower = number;
	while (power > 0)
	{
		if (power & 0x1) { // Bitwise operators work on bits and perform bit-by-bit operation.
			realPower *= currentPower; // by putting 0x in front of the number it allows you to enter Hexadecimal numbers into the source code
		}
		currentPower *= currentPower;
		power >>= 1; // power = power / 2
	} // end-while

	return realPower;
} // end-Power2
