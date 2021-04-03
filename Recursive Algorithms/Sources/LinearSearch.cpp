#include<iostream>
#include<vector>

using namespace std;
int ForwardLinearSearch(vector<int>&, int, int,int);

int main() {

	vector<int> A = { 9, 4, 10, 1, 20, 12, 3, 99, 65, 52, 25, 11, 91, 24, 20, 20, 33, 22 };
	cout << "Index of 20: " << ForwardLinearSearch(A, A.size(), 20, 0) << endl;
	cout << "Index of 57: " << ForwardLinearSearch(A, A.size(), 57, 0) << endl;
	return 0;

} // end-main

int ForwardLinearSearch(vector<int>& A, int size, int key, int index) {

	// Base case
	if (index == size) return -1;
	if (key == A[index]) return index;

	// Divide and conquer
	int result = ForwardLinearSearch(A, A.size(), key, index + 1);

	// Merge
	return result;
}