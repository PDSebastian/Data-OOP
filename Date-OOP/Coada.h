#pragma once
#include"Lista.h"
template<typename T>
class Coada: private Lista<T>

{
   public:
   void push(const T& val);
   void pop();
   T front() const;
   T back() const;
   int size() const;
   bool isEmpty() const;
   void afisareCoada() const;


};
