#pragma once
#ifndef ALLKINDS_H
#define ALKINDS_H
#include <iostream>

class AllKinds {
public:
	AllKinds(int inum=1, long lnum=1, float fnum=1.0f);
	int getInt() const { return inum; }
	long getLong() const { return lnum; }
	float getFloat() const { return fnum; }
	void setInt(int inum);
	void setLong(long lnum);
	void setFloat(float fnum);

	
private:
	int inum;
	long lnum;
	float fnum;
};

#endif // AllKinds
