#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>&, int);

int main() {

	vector<int> A = { 9, 4, 10, 1, 20, 12, 3, 99, 65, 52, 25, 11, 91, 24, 20 };
	cout << "Index of 20: " << linearSearch(A, 20) << endl;
	cout << "Index of 57: " << linearSearch(A, 57) << endl;
	system("pause");
} //end-main

//Forward linear search in a unsorted array
int linearSearch(vector<int>& A, int key) {
	for (uint32_t i = 0; i < A.size(); i++)
	{
		if (A[i] == key) return i;
	} // end-for
	return -1;
} // end-linearSearch