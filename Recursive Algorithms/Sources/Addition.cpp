#include<iostream>
#include<vector>

using namespace std;

int Sum1(int);
int Sum2(vector<int>&, int);
int Sum3(vector<int>&, int, int);
int main() {

	int result = Sum1(4);
	cout << "Sum1: " << Sum1(4) << endl;
	vector<int> A = { 3, 1, 6, 5, 8, 2, 4, 7 }; // sum = 36
	cout << "Sum2: " << Sum2(A, A.size()) << endl;
	cout << "Sum3: " << Sum3(A, 0, A.size() - 1) << endl;
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
	if (size == 1) return A[0];

	// Divide and conquer
	int localSum = Sum2(A, size - 1);

	// Merge
	return localSum + A[size - 1];
} // end-Sum2

// Computes 1 + 2 + 3 + ... + n
int Sum3(vector<int>& A, int left, int right) {
	// Base case
	if (left > right) return 0;
	if (left == right) return A[left];

	// Divide and conquer
	int middle = (left + right) / 2;
	int localSum1 = Sum3(A, left, middle);
	int localSum2 = Sum3(A, middle + 1, right);
	// Merge
	return localSum1 + localSum2;
} // end-Sum3