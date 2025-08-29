#include "CreditCard.h"

using namespace std;

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal)
{
	number = no;
	name = nm;
	balance = bal;
	limit = lim;
}

bool CreditCard::chargeIt(double price) {
	if (price + balance > double(limit))
		return false;
	balance += price;
	return true;
}

void CreditCard::makePayment(double payment) {
	balance -= payment;
}

ostream& operator<<(ostream& out, const CreditCard& c) {
	out << "Number= " << c.getNumber() << "\n";
	out << "Name= " << c.getName() << "\n";
	out << "Balance= " << c.getBalance() << "\n";
	out << "Limit= " << c.getLimit() << "\n";
	return out;
}