#pragma once  
#include <iostream>  
#include <string>  
#ifndef PERSON_H  
#define PERSON_H  

class Person {  
private:  
	std::string name;  
	std::string idNum;  
public:  
	Person(const std::string& nm, const std::string& id) : name(nm), idNum(id) {}  
	//..  
	virtual void print();  
	std::string getName(); 
	virtual ~Person() {};
};  

#endif