#include "Progression.h"

#include <iostream>
using namespace std;

#ifndef ARITH_PROGRESSION_H
#define ARITH_PROGRESSION_H

class ArithProgression : public Progression {
public:
	ArithProgression(long i = 1) : Progression(), inc(i) {};
protected:
	virtual long nextValue();
protected:
	long inc;
};

#endif