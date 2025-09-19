
#include "Lista.h"

int main()
{
	ILista<int>* lista = new Lista<int>();
	lista->addEnd(10);
	lista->addEnd(20);
	lista->addEnd(30);
	lista->afisare();
	lista->front();
	delete lista;




}


