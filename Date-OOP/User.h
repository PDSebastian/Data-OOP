#pragma once
#include"ILista.h"
#include"Lista.h"
#include"Coada.h"
#include"Deque.h";
#include "Set.h"
#include"Stiva.h"

using namespace std;
class User {
public:
	void testareLista() {
		Lista<int >* lista = new Lista<int >();
		lista->addEnd(5);
		lista->addEnd(6);
		lista->addEnd(7);
		lista->addStart(10);
		cout << lista->front()<<endl;
		cout << lista->back()<<endl;
		cout << lista->size() << endl;


	}
	void testareCoada() {
		Coada<int >* coada = new Coada<int>();
		coada->push(1);
		coada->push(2);
		coada->push(3);
		coada->pop();
		cout << coada->size() << endl;
		cout << coada->front() << endl;
		cout << coada->back() << endl;
	
	
	}
	void testareDeque() {
		Deque<int>* deque = new Deque<int>();
		deque->pushFront(50);
		deque->pushFront(60);
		deque->pushFront(70);
		deque->pushBack(90);
		deque->popBack();
		deque->popFront();
		deque->afisareDeque();
	
	
	}
	void testareSet() {
		Set<int>* set = new Set<int>();
		set->pushElem(100);
		set->pushElem(200);
		set->pushElem(100);
		set->afisareSet();

	
	
	
	
	
	}
	void testareStiva() {
		Stiva<int>* stiva = new Stiva<int>();
		stiva->push(9);
		stiva->push(8);
		stiva->push(7);
		stiva->push(6);
		stiva->pop();
		cout << stiva->size() << endl;
	
	}
	

};