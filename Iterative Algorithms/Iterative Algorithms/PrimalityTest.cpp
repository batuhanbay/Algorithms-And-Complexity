#include<iostream>
#include<math.h>

using namespace std;

bool isPrime1(int);
bool isPrime2(int);

int main() {
		
	cout << "isPrime1(5)? " << isPrime1(5) << " , " << "isPrime2(5)? " << isPrime2(5) << endl;
	system("pause");

} // end-man

// Compute a^n 
bool isPrime1(int number) {

	if (number == 1) return false;
	if (number == 2) return true;
	int x = 2;
	while (x < number)
	{
		if (number % x == 0) return false;
		x++;
	} // end-while

	return true;
} // end-isPrime1

// Compute a^n 
bool isPrime2(int number) {

	if (number == 1) return false;
	if (number == 2) return true;
	int x = 2;
	while (x <= sqrt(number))
	{
		if (number % x == 0) return false;
		x++;
	} // end-while

	return true; 
} // end-isPrime1