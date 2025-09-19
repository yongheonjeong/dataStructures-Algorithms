#pragma once
#include <iostream>
#ifndef STACK_H
#define STACK_H

template<typename E>
class Stack {
public:
	int size() const;
	bool empty() const;
	const E& top() const throw(StackEmpty);
	void push(const E& e);
	void pop() throw (StackEmpty);
};

#endif