#pragma once
#include <iostream>
#ifndef FLOWER_H
#define FLOWER_H
class Flower {

public:
	Flower(std::string name = "none", int flowers = 0, float price = 0.0f) : name(name), flowers(flowers), price(price) {};

	std::string getName() const { return name; };
	int getFlowers() const { return flowers; };
	float getPrice() const { return price; };

	std::string setName(std::string name);
	int setFlowers(int flowers);
	float setPrice(float price);

 private:
	std::string name;
	int flowers;
	float price;
};

std::ostream& operator<<(std::ostream& out,Flower& f);

#endif