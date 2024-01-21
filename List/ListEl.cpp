#include "ListEl.h"

template<typename T>
ListEl<T>::ListEl(T data) {
    this->data = data;
    this->prev = nullptr;
    this->next = nullptr;
}

template<typename T>
void ListEl<T>::setPrev(ListEl<T> * prev){
    this->prev = prev;
}

template<typename T>
void ListEl<T>::setNext(ListEl<T> * next){
    this->next = next;
}

template<typename T>
void ListEl<T>::setData(T data){
    this->data = data;
}

template<typename T>
T ListEl<T>::getData(){
    return this->data;
}

template<typename T>
ListEl<T> * ListEl<T>::getNext(){
    return this->next;
}

template<typename T>
ListEl<T> * ListEl<T>::getPrev(){
    return this->prev;
}