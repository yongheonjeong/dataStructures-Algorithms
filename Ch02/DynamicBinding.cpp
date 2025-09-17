#include "Person.h"
#include "Student.h"
using namespace std;

void DynamicBinding() {
	Person* pp[100];
	pp[0] = new Person("yh", "1");
	pp[1] = new Student("zz", "2", "cs", 4);

	pp[0]->print();
	pp[1]->print();

	delete pp[0];
	delete pp[1];

}