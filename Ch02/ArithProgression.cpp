#include "ArithProgression.h"
#include <iostream>
using namespace std;
 

long ArithProgression::nextValue() {
	cur += inc;
	return cur;
}