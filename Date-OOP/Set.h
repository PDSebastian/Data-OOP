#pragma once
#include "Lista.h"
template<typename T>
class Set:private Lista<T>
{
public:
	bool contine(const T& elem) {
		Node<T>* aux = this->head;
		while (aux) {
			if (aux->getData() == elem) {
				return true;

			}
			aux = aux->getNext();
		}
		return false;
	}
	void pushElem(const T& elem) {
		if (!contine(elem)) {
			this->addEnd(elem);

		}
	}
	void popElem(const T& elem) {
		Node<T>* aux = this->head;
		int i = 0;
		while (aux != NULL) {
			if (aux->getData() == elem) {
				this->deleteNode(i);
				return;
			}
			aux = aux->getNext();
			i++;
		}
	}
	int size()const {
		return Lista<T>::size();
	}
	bool isEmpty()const {
		return Lista<T>::size() == 0;
	}
	void afisareSet() const {
		Lista<T>::afisare();
	}




};