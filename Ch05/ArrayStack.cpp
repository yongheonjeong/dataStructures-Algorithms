#include "Exception.h"  
#include "Stack.h"  
using namespace std;

template<typename E>
class ArrayStack : Stack {
	enum { DEF_CAPACITY = 100};
public:
	ArrayStack(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& top() const throw(StackEmpty);
	void push(const E& e) throw(StackFull);
	void pop() throw(StackEmpty);
	~ArrayStack() {
		delete S;
	};
	ArrayStack(const ArrayStack& a) {
		if (this == a) return;
		if (S != NULL) delete S;
		
		S = new E[DEF_CAPACITY];
	  
		this->capacity = a.capacity  

		for (int i = 0; i < capacity; i++) {
			S[i] = a[i];
		}
	}
private:
	E* S=NULL;
	int capacity;
	int t;
};

template <typename E> ArrayStack<E>::ArrayStack(int cap)
	: S(new E[cap]), capacity(cap), t(-1) {
}

template <typename E> int ArrayStack<E>::size() const { return (t + 1); }

template <typename E> bool ArrayStack<E>::empty() const { return (t < 0); }

template <typename E>
const E& ArrayStack<E>::top() const throw(StackEmpty) {
	if (empty()) throw StackEmpty("Top of empty stack");
	return S[t];
}

template<typename E>
void ArrayStack<E>::push(const E& e) throw(StackFull) {
	if (size() == capacity) throw StackFull("Push to full stack");
	S[++t] = e;
}

template<typename E>
void ArrayStack<E>::pop() throw(StackEmpty) {
	if (empty()) throw StackEmpty("Pop from empty stack");
	--t;
}
