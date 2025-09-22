#pragma once
#include "Lista.h"
template<typename T>
class Stiva:private Lista<T> 
{
public :
	void push(const T& elem);
	T top() const;
	void pop();
	int size() const;
	bool isEmpty() const;
	void afisareStiva() const;

};


