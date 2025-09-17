#pragma once
#ifndef PROGRESSION
#define PROGRESSION
class Progression {
public:
	Progression(long f = 0) : first(f), cur(f) {};
	virtual ~Progression() {};
	void printProgression(int n);
protected:
	virtual long firstValue();
	virtual long nextValue()=0;
protected:
	long first;
	long cur;
};
#endif