#pragma once
#ifndef  EXCEPTION_H
#define  EXCEPTION_H

#include <iostream>
#include <string>

class RuntimeException {
public:
	RuntimeException(const std::string& errMsg) : errMsg(errMsg) {}
	std::string getError() { return errMsg; }
private:
	std::string errMsg;
};

class StackEmpty : public RuntimeException {
public:
	StackEmpty(const std::string& err) : RuntimeException(err) {}
};

class StackFull : public RuntimeException {
public:
	StackFull(const std::string& err) : RuntimeException(err) {}
};

#endif#pragma once
