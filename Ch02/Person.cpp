#include <iostream>
#include "Person.h"
using namespace std;

void Person::print() {
	cout << "Name : " << name << endl;
	cout << "IDnum : " << idNum << endl;
  
}

std::string Person::getName() {
	return name;
}