#include "GeomProgression.h"
#include <iostream>
using namespace std;

GeomProgression::GeomProgression(long b) : Progression(1), base(b) {}

long GeomProgression::nextValue() {
	cur *= base;
	return cur;
}