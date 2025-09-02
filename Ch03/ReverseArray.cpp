#include <iostream>
using namespace std;

void ReverseArray(int A[], int i, int j) {
	if (i < j) {
		{
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		ReverseArray(A, i + 1, j - 1);
	}
}