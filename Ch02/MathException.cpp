#include <iostream>
using namespace std;

class MathException {
public:
	MathException(const string& err) : errMsg(err) {}
	string getError() { return errMsg; }
private:
	string errMsg;
};

class ZeroDivide : public MathException {
public:
	ZeroDivide(const string& err) :MathException(err) {}
};

class NegativeRoot : public MathException {
public:
	NegativeRoot(const string& err)
		: MathException(err) {
	}
};

void MathExeption() {
	
	int share = 0;
	int divisor = 0;


	//try {
	//	if (divisor == 0)
	//		throw ZeroDivide("Divided by zero in Module X");

	//}
	//catch (ZeroDivide& zde) {

	//}
	//catch (MathException& me) {

	//}
}