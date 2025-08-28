#include "ArithProgression.h"
#include <iostream>
using namespace std;

ArithProgression::ArithProgression(long i) : Progression(), inc(i) {};

long ArithProgression::nextValue() {
	cur += inc;
	return cur;
}