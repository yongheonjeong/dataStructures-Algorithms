#include <iostream>
using namespace std;

template<typename T>
class BasicVector {
public:
	BasicVector(int capac = 10);
	T& operator[](int i) { return a[i]; }

private:
	T* a;
	int capacity;
};

template<typename T>
BasicVector<T>::BasicVector(int capac) {
	capacity = capac;
	a = new T[capacity];
}


void BasicVectorMain() {
	BasicVector<double> bd(5);
	for (int i = 0; i < 5; i++) {
		bd[i] = i;
	}
	cout << bd[4];
}