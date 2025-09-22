#include"Deque.h"
template<typename T>
T Deque<T>::front() const{
    return Lista<T>::front();

}
template<typename T>
T Deque<T>::back() const{
    return Lista<T>::back();

}
template<typename T>
T Deque<T>::at(int poz) const{
 Node<T>*aux=this->head;
 int i=0;
  while(i<poz){
   aux=aux->getNext();
   i++;
  }
   return aux->getData();
   
}
template<typename T>
void Deque<T>::pushFront(const T& elem){
    this->addEnd(elem);

}
template<typename T>
void Deque<T>::pushBack(const T& elem){
    this->addStart(elem);


}
template<typename T>
void Deque<T>::popFront() {
    this->deleteNode(0);

}
template<typename T>
void Deque<T>::popBack() {
    this->deleteNode(this->size()-1);

}
template<typename T>
int Deque<T>::size() const{
    return Lista<T>::size();

}
template<typename T>
bool Deque<T>::isEmpty() const{
    return this->size()==0;

}
template<typename T>
void Deque<T>::afisareDeque()const{
   Lista<T>::afisare();


}
