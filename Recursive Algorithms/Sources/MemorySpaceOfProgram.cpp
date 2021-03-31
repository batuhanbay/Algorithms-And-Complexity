#include<iostream>
#include<vector>

using namespace std;

int Sum1(int, int);

int dummy = 10; // Global

int main() {

	vector<int> A(2);
	A[0] = 3;
	A[1] = 1;
	int result1 = Sum1(A[0], A[1]);
	return 0;

} // end-main

// Computes 1 + 2 + 3 + ... + n
int Sum1(int x, int y) {
	int z;
	z = x + y;
	return z;
} // end-Sum1