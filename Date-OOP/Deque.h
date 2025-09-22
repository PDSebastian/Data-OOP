#pragma once
#include "Lista.h"
template<typename T>
class Deque:private Lista<T>
{
public:
T front() const;
T back() const;
T at(int poz) const;
void pushFront(const T& elem);
void pushBack(const T& elem);
void popFront() ;
void popBack();
int size()const;
bool isEmpty() const;
void afisareDeque() const;

};

