// SLinkedList.h
#pragma once
#include <stdexcept>

template<typename E> class SLinkedList;

template<typename E>
class SNode {
private:
    E elem;
    SNode<E>* next;
    friend class SLinkedList<E>;
};

template<typename E>
class SLinkedList {
public:
    SLinkedList() : head(nullptr) {}
    ~SLinkedList() { while (!empty()) removeFront(); }

    bool empty() const { return head == nullptr; }
    const E& front() const {
        if (empty()) throw std::runtime_error("List is empty");
        return head->elem;
    }
    void addFront(const E& e) {
        SNode<E>* v = new SNode<E>;
        v->elem = e;
        v->next = head;
        head = v;
    }
    void removeFront() {
        if (empty()) throw std::runtime_error("List is empty");
        SNode<E>* old = head;
        head = old->next;
        delete old;
    }

private:
    SNode<E>* head;
};
