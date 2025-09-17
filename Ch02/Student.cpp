#include <iostream>
#include "Student.h"
using namespace std;

void Student::print() {
	cout << "\n";
	Person::print();
	cout << "Major : " << major << endl;
	cout << "Year : " << gradYear << endl;
}


void Student::changeMajor(const std::string& newMajor) {
	this->major = newMajor;
}