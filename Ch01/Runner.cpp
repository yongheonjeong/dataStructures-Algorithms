#include <iostream>
using namespace std;


void printArray(int** A, int m, int n);
void testCard();
int divideTwo(double x);

int main() {

	int count = 0;
	int* array[3];
	for (int i = 0; i < 3; i++) {
		array[i] = new int[2];
		for (int j = 0; j < 2; j++) {
			array[i][j] = ++count;
		}
	}

	int** A = new int* [3];

	for (int i = 0; i < 3; i++) {
		A[i] = array[i];
	}

	printArray(A, 3, 2);

  testCard();

  cout << divideTwo(20) << "\n";
}


void printArray(int** A, int m, int n) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}
