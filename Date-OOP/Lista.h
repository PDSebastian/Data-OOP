#pragma once
#include "ILista.h"
template<typename T>
class Lista  :public ILista<T>
{
private:
	Node<T>* head;
public:
	Lista() {
		this->head = NULL;
	}
	void addEnd(T valNode) override {
		Node<T>* node = new Node<T>(valNode, nullptr);
		node->setData(valNode);
		if (!head) {
			head = node;
		}
		else {
			Node<T>* aux = head;
			while (aux->getNext()) {
				aux = aux->getNext();

			}
			aux->setNext(node);
		}



	}
	void addStart(T val)override {
		Node<T>* aux = new Node<T>(val, nullptr);
		aux->setData(val);
		aux->setNext(head);
		head = aux;

	}
	void deleteNode(int poz)override {
		if (!head) {
			return;
		}
		if (poz == 0) {
			Node<T>* aux = head;
			head = head->getNext();
			delete aux;
			return;

		}
		Node<T>* p = head;
		int i = 0;
		while (p != NULL && i < poz - 1) {
			p = p->getNext();
			i++;


		}
		Node<T>* sters = p->getNext();
		p->setNext(sters->getNext());
		delete sters;


	}
	void afisare() override {
		Node<T>* aux = head;
		while (aux) {
			cout<<aux->getData()<<" ";
			aux = aux->getNext();

		}
	}
	T front() override {
		return head->getData();
	
	
	}
	T back() override{
		Node<T>* aux = head;
		while (aux->getNext() != NULL) {
			aux = aux->getNext();

		}
		return aux->getData();
	}

};
