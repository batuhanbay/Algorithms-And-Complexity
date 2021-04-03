#include<iostream>
#include<vector>

using namespace std;

int Sum1(int);
int Sum2(vector<int>&, int);
int main() {

	int result = Sum1(4);
	cout << "Sum1: " << Sum1(4) << endl;
	vector<int> A = { 3, 1, 6, 5, 8, 2, 4, 7 }; // sum = 36
	cout << "Sum2: " << Sum2(A, A.size()) << endl;
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
} // end-Sum1

// Computes 1 + 2 + 3 + ... + n
int Sum2(vector<int>& A, int size) {
	// Base case
	if (size == 0) return 0;
	if (size == 1) return 1;

	// Divide and conquer
	int localSum = Sum2(A, size - 1);

	// Merge
	return localSum + A[size - 1];
} // end-Sum2