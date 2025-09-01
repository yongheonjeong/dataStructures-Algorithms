#include "Flower.h"

std::string Flower::setName(std::string name) {
	this->name = name;
	return name;
}


int Flower::setFlowers(int flowers) {
	this->flowers = flowers;
	return flowers;
}

float Flower::setPrice(float price) {
	this->price = price;
	return price;
}

std::ostream& operator<<(std::ostream& out, Flower& f) {
	out << "name : " << f.getName() << "\n";
	out << "flowers : " << f.getFlowers() << "\n";
	out << "price : " << f.getPrice() << "\n";

	return out;
}