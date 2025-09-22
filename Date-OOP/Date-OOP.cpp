
#include "Lista.h"
#include "Stiva.cpp"
#include "Coada.cpp"
#include "Deque.cpp"
#include"Set.cpp"

int main()
{
	ILista<int>* lista = new Lista<int>();
	lista->addEnd(10);
	lista->addEnd(20);
	lista->addEnd(30);
	lista->pushFront(40);
	lista->pushBack(60);
	Coada<int >*coada=new Coada<int >();
	coada->push(20);
	coada->push(30);
	coada->push(40);
	// cout << coada->front() << endl;
	// cout << coada->back() << endl;
	coada->isEmpty();
	Stiva<int >*stiva=new Stiva<int >();
	stiva->push(50);
	stiva->push(60);
	stiva->push(70);
	stiva->push(80);
	stiva->pop();
	stiva->pop();
	Deque<int>*deque=new Deque<int>();
	deque->pushFront(1);
	deque->pushFront(2);
	deque->pushFront(3);
	deque->pushFront(4);
	deque->pushFront(5);
	deque->popFront();
	deque->popBack();
	Set<int>* set = new Set<int>();
	set->pushElem(1);
	set->pushElem(1);
	set->pushElem(2);
	set->pushElem(2);
	set->pushElem(3);
	set->pushElem(4);
	set->afisareSet();





	








}


