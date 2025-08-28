#include <iostream>
using namespace std;

enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETERIAN};

struct Passenger {
	string name;
	MealType mealPref;
	bool isFreqFlyer;
	string freqFlyerNo;
};

ostream& operator<<(ostream& out, const Passenger& pass) {
	out << pass.name << " " << pass.mealPref;
	if (pass.isFreqFlyer) {
		out << " " << pass.freqFlyerNo;
	}

	return out;
}

class Counter {
public:
	Counter();
	int getCount();
	void increaseBy(int x);
private:
	int count;
};

Counter::Counter() {
	count = 0;
}
int Counter::getCount() {
	return count;
}

void Counter::increaseBy(int x) {
	count += x;
}

int main() {
	/*Passenger p1 = { "Kim", REGULAR, false, "" };

	cout << p1 << endl;*/

	string s = "a dog";
	s += " is a dog";
	cout << s.find("dog");
	cout << s.find("dog", 3);
	if (s.find("doug") == string::npos) {}
	cout << s.substr(7, 5);
	s.replace(2, 3, "frog");
	s.erase(6, 3);
	s.insert(0, "is ");
	if (s == "is a frog a dog") {}
	if(s<"is a frog a toad"){}
	if (s < "is a frog a cat") {}


}