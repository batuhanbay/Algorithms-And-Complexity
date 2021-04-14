#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

void InsertionSort(vector<int>& A);


int main() {

	vector<int> A = { 5, 10, 3, 2, 8, 5, 12, 20, 25, 17, 5, 1, 9, 3, 13, 12, 1 };

	InsertionSort(A);

	printf("Sorted sequence:\n");
	for (auto n : A) cout << n << ", ";

	cout << "\b\b \n";
	return 0;
} // end-main

///-----------------------------------------------------
/// InsertionSort: O(N^2) worst case, O(N) best case
/// 
void InsertionSort(vector<int>& A) {
	for (uint32_t P = 1; P < A.size(); P++) {
		int tmp = A[P];
		int j = (int)P;
		for (j = P; j > 0 && A[j - 1] > tmp; j--) {
			A[j] = A[j - 1]; //Shift A[j-1] to right
		} //end-for-inner

		A[j] = tmp; // Found a spot for A[P] (= Tmp)
	} //end-for-outer
} //end-InsertionSort