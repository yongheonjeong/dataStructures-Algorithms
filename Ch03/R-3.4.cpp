#include <iostream>
using namespace std;

int RecursionSum(int** A,int m) { 
	if (m <= 0) return A[0][0];
	return **(A + m - 1) + RecursionSum(A, m - 1);
}