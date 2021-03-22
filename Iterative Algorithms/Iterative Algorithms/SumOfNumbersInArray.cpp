#include<iostream>
#include<vector>

using namespace std;

int sum(vector<int>);


int main() {

	vector<int> A = { 3, 9, 6, 5, 2 };
	int result = sum(A);
	cout << "Sum of an array of numbers: " << result << endl;
	system("pause");

} //end-main

// Compute the summation of N numbers
int sum(vector<int> A) {
	int sum = 0;
	unsigned int i = 0;
	while (i < A.size())
	{
		sum += A[i];
		i++;
	} // end-while
	return sum;
} // end-sum
