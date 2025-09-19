
#include "Lista.h"
#include "Stiva.h"

int main()
{
	ILista<int>* lista = new Lista<int>();
	lista->addEnd(10);
	lista->addEnd(20);
	lista->addEnd(30);
	lista->pushFront(40);
	lista->pushBack(60);
	cout<<lista->size();
	Stiva<int >*stiva=new Stiva<int >();
	stiva->push(10);
	stiva->push(20);
	stiva->push(30);
	stiva->peek();
	
	

	//lista->afisare();








}


