#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>&, int);

int main() {

	vector<int> A = { 3, 8, 10, 11, 20, 50, 55, 60, 65, 70, 72, 90, 91, 94, 96, 99 };
	cout << "Index of 55: " << binarySearch(A, 55);
	cout << "Index of 57: " << binarySearch(A, 57);
	system("pause");

} //end-main 

//Binary search in a sorted array
int binarySearch(vector<int>& A, int key) {
	int left = 0;
	int right = (int)A.size() - 1;
	while (left <= right)
	{
		int middle = (left + right) / 2; //Index of the key to test against
		if (A[middle] == key) return middle; // Key found. Return the index
		else if (key < A[middle]) right = middle - 1; // Eliminate the right side
		else left = middle + 1; // Eliminate the left side
	} //end-while
	return -1; // Key not found
} // end-binarySearch