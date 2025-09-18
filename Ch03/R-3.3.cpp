#include <iostream>


void transpose_matrix(int** A,int n) {
	
	int temp = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			 temp = A[i][j];
			 A[i][j] = A[j][i];
			 A[j][i] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cout << A[i][j] << " ";
		}
		std::cout << "\n";
	}
}