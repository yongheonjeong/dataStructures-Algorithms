#include <iostream>
using namespace std;

int BinaryFib(int k) {
	if (k <= 1) return k;
	else
		return BinaryFib(k - 1) + BinaryFib(k - 2);
}