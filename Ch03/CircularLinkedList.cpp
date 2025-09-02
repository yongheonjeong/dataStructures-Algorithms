#include <iostream>
#include "CircularLinkedList.h"

using namespace std;

CircleList::CircleList() : cursor(NULL) {}
CircleList::~CircleList() {
	while (!empty()) remove();
}

bool CircleList::empty() const
{
	return cursor == NULL;
}

const Elem& CircleList::back() const
{
	return cursor->elem;
}

const Elem& CircleList::front() const {
	return cursor->next->elem;
}

void CircleList::advance() {
	cursor = cursor->next;
}

void CircleList::add(const Elem& e) {
	CNode* v = new CNode;
	v->elem = e;
	if (cursor == NULL) {
		v->next = v;
		cursor = v; // v->next = v 이므로 cursor->next = v 
	}
	else {
		v->next = cursor->next; // 환형연결(2개일때)
		cursor->next = v; // 삽입하면 cursor->next가 새로운 v노드가 된다, cursor->next는 계속 새로운 노드를 가리킴
	}
}

void CircleList::remove() {
	CNode* old = cursor->next; //
	if (old == cursor) {
		cursor = NULL;
	}
	else {
		cursor->next = old->next;
	}
	delete old;
}