#include<iostream>
#include<vector>

using namespace std;

void matrixMultiply(vector<vector<int>>&, vector<vector<int>>&, vector<vector<int>>&);
void printMatrix(vector<vector<int>>&);

int main() {

	vector<vector<int>> A = { {5, 1, 2}, {1, 2, 4}, {6, 2, 7} };
	vector<vector<int>> B = { {1, 2, 2}, {3, 1, 3}, {2, 1, 4} };
	vector<vector<int>> C(3, vector<int>(3));
	matrixMultiply(A, B, C);
	printMatrix(C);
	system("pause");

} // end-main

// Compute matrix multiplication
void matrixMultiply(vector<vector<int>>& A, vector<vector<int>>& B, vector<vector<int>>& C) {

	for (uint32_t i = 0; i < C.size(); i++)
	{
		for (uint32_t j = 0; j < C[i].size(); j++)
		{
			C[i][j] = 0;
			for (uint32_t k = 0; k < A[i].size(); k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			} // end-for
		} // end-for
	} // end-for
} // end-matrixMultiply

// Print the matrix
void printMatrix(vector<vector<int>>& A) {

	for (uint32_t i = 0; i < A.size(); i++)
	{
		for (uint32_t j = 0; j < A[i].size(); j++)
		{
			cout << A[i][j] << " , ";
		} // end-for
		cout << endl;
	} // end-for
} // end-printMatrix