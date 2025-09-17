#include "Student.h"
#include "Person.h"
using namespace std;

void DynamicCasting() {
	Person* pp[100];
	pp[0] = new Person("yh", "1");
	pp[1] = new Student("zz", "2", "cs", 4);

	Student* sp = dynamic_cast<Student*>(pp[1]);
	sp->changeMajor("Chemistry");

	sp->print();

	delete pp[0], pp[1];

}