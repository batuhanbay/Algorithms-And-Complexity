#include<iostream>
#include<vector>

using namespace std;

int Sum1(int);

int main() {

	int result = Sum1(4);
	return 0;

} // end-main

// Computes 1 + 2 + 3 + ... + n
int Sum1(int n) {
	// Base case
	if (n == 1) return 1;

	// Divide and conquer
	int partialSum = Sum1(n - 1);

	// Merge
	return partialSum + n;
} // end-Sum2