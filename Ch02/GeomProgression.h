#pragma once
#include "Progression.h"
#include <iostream>
#ifndef GEOM_PROGRESSION_H
#define GEOM_PROGRESSION_H
using namespace std;

class GeomProgression : public Progression {
public:
	GeomProgression(long b = 2);
protected:
	virtual long nextValue();
protected:
	long base;
};

#endif