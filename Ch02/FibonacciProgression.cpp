#include <iostream>
#include "FibonacciProgression.h"
using namespace std;

FibonacciProgression::FibonacciProgression(long f, long s) :Progression(f), second(s), prev(second - first) {}

long FibonacciProgression::firstValue() {
	cur = first;
	prev = second - first;
	return cur;
}

long FibonacciProgression::nextValue() {
	long temp = prev;
	prev = cur;
	cur += temp;
	return cur;
}