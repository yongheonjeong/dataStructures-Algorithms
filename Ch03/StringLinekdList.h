#pragma once
#include <iostream>
class StringNode {
private:
	std::string elem;
	StringNode* next;

	friend class StringLinkedList;
};

class StringLinkedList {
public:
	StringLinkedList();
	~StringLinkedList();
	bool empty() const;
	const std::string& front() const;
	void addFront(const std::string& e);
	void removeFront();
private:
	StringNode* head;
};
