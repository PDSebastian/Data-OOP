#pragma once
#include "Lista.h"
template<typename T>
class Deque:private Lista<T>
{
public:
	T front() const {
		return Lista<T>::front();
	}
	T back() const {
		return Lista<T>::back();
	}
	T at(int poz) const {
		Node<T>* aux = this->head;
		int i = 0;
		while (i < poz) {
			aux = aux->getNext();
			i++;
		}
		return aux->getData();
	}
	void pushFront(const T& elem) {
		this->addEnd(elem);
	}
	void pushBack(const T& elem) {
		this->addStart(elem);
	}
	void popFront() {
		this->deleteNode(0);
	}
	void popBack() {
		this->deleteNode(this->size() - 1);
	}
	int size()const {
		return Lista<T>::size();
	}
	bool isEmpty() const {
		return this->size() == 0;

	}
	void afisareDeque() const {
		Lista<T>::afisare();
	}

};

