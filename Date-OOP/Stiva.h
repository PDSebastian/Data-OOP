#pragma once
#include "Lista.h"
template<typename T>
class Stiva:private Lista<T> 
{
public :
	void push(const T& elem) {
		this->addStart(elem);
	}
	T top() const {
		return this->back();
	}
	void pop() {
		return this->deleteNode(0);

	}
	int size() const {
		return Lista<T>::size();
	}
	bool isEmpty() const {
		return this->size() == 0;

	}
	void afisareStiva() const {
		Lista<T>::afisare();
	}

};


