#pragma once
#include"Lista.h"
template<typename T>
class Coada: private Lista<T>

{
   public:
	   void push(const T& val) {
		   this->addEnd(val);
	   }
	   void pop() {
		   this->deleteNode(0);
	   }
	   T front() const {
		   return Lista<T>::front();
	   }
	   T back() const {
		   return Lista<T>::back();
	   }
	   int size() const {
		   return Lista<T>::size();
	   }
	   bool isEmpty() const {
		   return this->size() == 0;
	   }
	   void afisareCoada() const {
		   this->afisare();
	   }


};
