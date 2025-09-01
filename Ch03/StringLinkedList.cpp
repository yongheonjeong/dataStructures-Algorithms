#include <iostream>
#include "StringLinekdList.h"
using namespace std;


StringLinkedList::StringLinkedList() : head(NULL) {}
StringLinkedList::~StringLinkedList() {
	while (!empty()) removeFront();
}
bool StringLinkedList::empty() const {
	return head == NULL;
}

const string& StringLinkedList::front() const {
	return head->elem;
}

void StringLinkedList::addFront(const string& e) {
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}

void StringLinkedList::removeFront() {
	if (!(head == NULL)) {
		StringNode* old = head;
		head = old->next;
		delete old;
	}
}

 