#include <iostream>
#include "Person.h"
#ifndef STUDENT_H
#define STUDENT_H


class Student : public Person {
private:
	std::string major;
	int gradYear;
public:
	Student(const std::string& nm, const std::string& id, const std::string& maj, int year) 
	: Person(nm, id), major(maj), gradYear(year) {}
	virtual void print();
	void changeMajor(const std::string& newMajor);
	virtual ~Student() {};
};


#endif