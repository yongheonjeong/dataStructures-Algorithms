#pragma once
#ifndef SCORES_H
#define SCORES_H
#include "GameEntry.h"
#include "RuntimeException.h"
#include <iostream>

class IndexOutOfBounds : public RuntimeException {  
public:  
    IndexOutOfBounds(std::string errMsg) : RuntimeException(errMsg) {}  
};

class Scores {
public:
	Scores(int MaxEnt = 10);
	~Scores();
	void add(const GameEntry& e);
	GameEntry remove(int i) throw(IndexOutOfBounds);
private:
	int maxEntries;
	int numEntries;
	GameEntry* entries;
};
#endif