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
		cursor = v; // v->next = v �̹Ƿ� cursor->next = v 
	}
	else {
		v->next = cursor->next; // ȯ������(2���϶�)
		cursor->next = v; // �����ϸ� cursor->next�� ���ο� v��尡 �ȴ�, cursor->next�� ��� ���ο� ��带 ����Ŵ
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