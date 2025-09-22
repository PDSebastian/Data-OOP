#include "Stiva.h"
template <typename T>
void Stiva<T>::push(const T& elem){
	this->addStart(elem);

}
template<typename T>
T Stiva<T>::top() const{
	return this->back();

}
template<typename T>
void Stiva<T>::pop(){
	return this->deleteNode(0);

}
template<typename T>
int Stiva<T>::size() const{
	return Lista<T>::size();


}
template<typename T>
bool Stiva<T>::isEmpty()const{
	return this->size()==0;

}
template<typename T>
void Stiva<T>::afisareStiva()const{
	Lista<T>::afisare();


}
