#pragma once
#include "Lista.h"
template<typename T>
class Stiva:public Lista<T> 
{
public :
	void push(T elem);
	T top();
	void pop(T elem);
	void peek();
	

};


