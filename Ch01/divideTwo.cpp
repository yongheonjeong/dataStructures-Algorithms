#include <iostream>
using namespace std;

int divideTwo(double x){
	
	int count = 0;

	while (x > 2) {
	
		x /= 2;
		count++;
	}

	return count;
}