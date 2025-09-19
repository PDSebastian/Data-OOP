
#include "Lista.h"

int main()
{
	ILista<int>* lista = new Lista<int>();
	lista->addEnd(10);
	lista->addEnd(20);
	lista->addEnd(30);
	lista->pushFront(40);
	lista->pushBack(60);
	cout<<lista->size();

	//lista->afisare();








}


