#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include <unordered_set>

using namespace std;

bool hasDuplicates1(vector<int>&);
bool hasDuplicates2(vector<int>&);
bool hasDuplicates3(vector<int>&);

int main() {
	vector<int> A1 = { 4, 2, 7, 10, 6, 9 };
	vector<int> A2 = { 4, 2, 7, 10, 6, 9, 7};
	cout << "------------------------------------------------------------------" << endl;
	cout << "A1 conytains duplicates? " << (hasDuplicates1(A1) ? "yes" : "no") << endl;
	cout << "A2 conytains duplicates? " << (hasDuplicates1(A2) ? "yes" : "no") << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << "A1 conytains duplicates? " << (hasDuplicates2(A1) ? "yes" : "no") << endl;
	cout << "A2 conytains duplicates? " << (hasDuplicates2(A2) ? "yes" : "no") << endl;
	cout << "------------------------------------------------------------------" << endl;
	cout << "A1 conytains duplicates? " << (hasDuplicates3(A1) ? "yes" : "no") << endl;
	cout << "A2 conytains duplicates? " << (hasDuplicates3(A2) ? "yes" : "no") << endl;

	system("pause");
} //end-main

// check for duplicates
bool hasDuplicates1(vector<int>& A) {
	for (uint32_t i = 0; i < A.size(); i++)
	{
		for (uint32_t j = i + 1; j < A.size(); j++)
		{
			if (A[i] == A[j]) return true;
		} // end-inner for
	} // end-outer for
	return false;
} // end-hasDuplicates1

// check for duplicates
bool hasDuplicates2(vector<int>& A) {
	sort(A.begin(), A.end());
	for (uint32_t i = 1; i < A.size(); i++)
	{
		if (A[i - 1] == A[i]) return true;
	} // end-for
	return false;
} // end-hasDuplicates1

// check for duplicates
bool hasDuplicates3(vector<int>& A) {
	unordered_set <int> dummy; // HashSet
	for (uint32_t i = 1; i < A.size(); i++)
	{
		if (dummy.find(A[i]) != dummy.end()) return true;
		dummy.insert(A[i]);
	} // end-for
	return false;
} // end-hasDuplicates1