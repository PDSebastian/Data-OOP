#pragma once
#include "Lista.h"
template<typename T>
class Set:private Lista<T>
{
public:
	bool contine(const T& elem) ;
	void pushElem(const T& elem);
	void popElem(const T& elem);
	int size()const;
	bool isEmpty()const;
	void afisareSet() const;




};