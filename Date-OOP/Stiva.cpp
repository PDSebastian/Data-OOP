#include "Stiva.h"
template <typename T>
void Stiva<T>::push(T elem){
  this->pushFront(elem);

}
template <typename T>
 T Stiva<T>::top(){
  return this->front(); 
 }
 template <typename T>
 void Stiva<T>::pop(T elem){
    this->deleteNode(0);
 }
 template <typename T>
 void Stiva<T>::peek(){
   Node<T>*aux=this->head;
   while(aux!=NULL){
      cout<<aux->data<<" ";
      aux=aux->getNext();
   }
   
 }



