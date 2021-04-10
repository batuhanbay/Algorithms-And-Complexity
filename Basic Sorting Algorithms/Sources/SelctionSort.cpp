#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void SelectionSort(vector<int>& A);
void Swap(int&, int&);

int main() {

	vector<int> A = { 5, 10, 3, 2, 8, 5, 12, 20, 25, 17, 5, 1, 9, 3, 13, 12, 1 };

	SelectionSort(A);

	printf("Sorted sequence:\n");
	for (auto n : A) cout << n << ", ";
	cout << "\b\b \n";

	return 0;
} // end-main

///-----------------------------------------------------
/// O(N^2) Selection Sort
///
void SelectionSort(vector<int>& A) {
	for (uint32_t i = 0; i < A.size() - 1; i++) {
		int minIndex = i;   // min index
		for (uint32_t j = i + 1; j < A.size(); j++) {
			if (A[j] < A[minIndex]) {
				minIndex = j;
			}
		} //end-for-inner

		if (i != minIndex) Swap(A[i], A[minIndex]);
	} //end-for-outer
} //end-SelectionSort


///-----------------------------------------------------
/// Swap two values using the xor operator without a temporary variable
///
void Swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
} // end-Swap
