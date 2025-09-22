#include "Coada.h"
template <typename T>
void Coada<T>::push(const T& val){
	this->addEnd(val);

}
template<typename T>
void Coada<T>::pop(){
	this->deleteNode(0);

}
template<typename T>
T Coada<T>::front() const{
	return Lista<T>::front();

}
template<typename T>
T Coada<T>::back() const{
	return Lista<T>::back();


}
template<typename T>
int Coada<T>::size()const{
	return Lista<T>::size();

}
template<typename T>
bool Coada<T>::isEmpty() const{
	return this->size()==0;
 
}
template<typename T>
void Coada<T>::afisareCoada() const{
	this->afisare();

}
