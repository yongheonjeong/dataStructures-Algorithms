#include <iostream>
using namespace std;

void prefixAverages1(int* X,const int n,int* p) {
	 
	int a = 0;
	 
	for (int i = 0; i < n; i++) {
	
		a = 0;
		for (int j = 0; j <= i; j++) {
			a  += X[j];
		}
		p[i] = a / (i + 1);

	}
	 

}