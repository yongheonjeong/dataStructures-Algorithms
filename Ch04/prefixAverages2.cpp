#include <iostream>
using namespace std;

void prefixAverages2(int* X, int n, int* p) {
	
	int sum = 0; 
	
	for (int i = 0; i < n; i++) {
		sum += X[i];
		p[i] = sum / (i + 1);
		 
	}
}