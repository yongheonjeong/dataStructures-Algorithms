#include <iostream>
using namespace std;

void dynamicAlloc() {
	int n = 0,m = 0,count=0;
	cout << "행의 개수? : ";
	cin >> n;
	cout << "열의 개수? : ";
	cin >> m;

	int** M = new int* [n];
	for (int i = 0; i < n; i++) {
		M[i] = new int[m];
		for (int j = 0; j < m; j++) {
			M[i][j] = count++;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << M[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		delete[] M[i];
	}
	delete[] M;

}