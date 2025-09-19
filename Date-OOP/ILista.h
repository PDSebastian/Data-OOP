#pragma once
#include"Node.h"
template<typename T>
class ILista
{
public:
	virtual void addEnd(const T& val) = 0;
	virtual void addStart(const T& val) = 0;
	virtual void deleteNode(int poz) = 0;
	virtual void afisare() const = 0;
	virtual T front() const  =0;
	virtual T back() const = 0;
	virtual void pushFront(const T& val)  = 0;
	virtual void pushBack(const T& val) = 0;
	virtual int size() const = 0;
	virtual ~ILista() = default;
};

