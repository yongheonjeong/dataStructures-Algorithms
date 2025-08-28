#pragma once

#include <iostream>
#include "Progression.h"
using namespace std;

class FibonacciProgression : public Progression {
public:
	FibonacciProgression(long f = 0, long s = 1);
protected:
	virtual long firstValue();
	virtual long nextValue();
protected:
	long second;
	long prev;
};