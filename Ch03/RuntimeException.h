#pragma once
#ifndef RUNTIME_EXCEPTION_H
#define RUNTIME_EXCEPTION_H


#include <iostream>
class RuntimeException {
public:
	RuntimeException(const std::string& errMsg) : errMsg(errMsg) {}
	std::string getError() { return errMsg; }
private:
	std::string errMsg;
};
#endif