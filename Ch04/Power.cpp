#include <iostream>

int Power(int x, int n) {
	int y = 0;

	if (n == 0) return 1;

	if (n % 2 != 0) {
		y = Power(x, (n - 1) / 2);
		return x * y * y;
	}
	else {
		y = Power(x, n / 2);
		return y * y;
	}


}