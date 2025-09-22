#include"Set.h"
template<typename T>
bool Set<T>::contine(const T& elem) {
    Node<T>* aux = this->head;
    while (aux) {
        if (aux->getData() == elem) {
            return true;
        
        }
        aux = aux->getNext();
    }
    return false;
}
template<typename T>
void Set<T>::pushElem(const T& elem){
  if(!contine(elem)){
    this->addEnd(elem);

  }

}
template<typename T>
void Set<T>::popElem(const T& elem) {
    Node<T>* aux = this->head;
    int i = 0;
    while (aux != NULL) {
        if (aux->getData() == elem) {
            this->deleteNode(i);
            return;
        }
        aux = aux->getNext();
        i++;
    }
}
template<typename T>
int Set<T>::size() const {
    return Lista<T>::size();
}
template<typename T>
bool Set<T>::isEmpty() const{
    return Lista<T>::size()==0;


}
template<typename T>
void Set<T>::afisareSet() const{
    Lista<T>::afisare();

}
