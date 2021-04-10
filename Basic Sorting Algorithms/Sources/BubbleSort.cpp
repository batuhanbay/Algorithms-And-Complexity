#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void BubbleSort(vector<int>& A); 
void Swap(int&, int&);

int main() {

	vector<int> A = { 5, 10, 3, 2, 8, 5, 12, 20, 25, 17, 5, 1, 9, 3, 13, 12, 1 };

	BubbleSort(A);

	printf("Sorted sequence:\n");
	for (auto n : A) cout << n << ", ";
	cout << "\b\b \n";

	return 0;
} // end-main

///-----------------------------------------------------
/// O(N^2) Bubble Sort
/// 
void BubbleSort(vector<int>& A) {
	for (uint32_t iter = 0; iter < A.size() - 1; iter++) {
		/* From start to the end of unsorted part */
		for (uint32_t j = 1; j < (A.size() - iter); j++) {
			/* If adjacent items out of order, swap */
			if (A[j - 1] > A[j]) { 
				Swap(A[j - 1], A[j]);
			}
		} //end-for-inner
	} //end-for-outer
} //end-BubbleSort

///-----------------------------------------------------
/// Swap two values using the xor operator without a temporary variable
///
void Swap(int& a, int& b) {
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
} // end-Swap
