#include<iostream>
using namespace std;

void IterativeReverseArray(int A[], int i, int j) {
	while (i < j) {
		{
			int temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
		i++;
		j--;
	}
}