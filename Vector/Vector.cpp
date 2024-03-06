#include "Vector.h"

template <class T>
template <typename... Args>
Vector<T>::Vector(Args... data) : length(sizeof...(Args)), capacity(sizeof...(Args) + 10){
    this->data = new T[sizeof...(Args) + 10]{data...};
}

template <class T>
Vector<T>::~Vector(){
    delete[] this->data;
}

template<class T>
void Vector<T>::expand() {
    this->capacity += (10 + this->length / 10);
    T newData[this->capacity];
    for(int i = 0; i < this->length; i++){
        newData[i] = this->data[i];
    }
    delete[] this->data;
    this->data = newData;
}

template<class T>
void Vector<T>::shrink() {
    if(this->capacity < 20){
        return;
    }
    this->capacity -= (this->capacity / 2 - 5);
    T newData[this->capacity];
    for(int i = 0; i < this->length; i++){
        newData[i] = this->data[i];
    }
    delete[] this->data;
    this->data = newData;
}



template <class T>
void Vector<T>::clear(){
    delete[] this->data;
    this->data = new T[10];
    this->length = 0;
    this->capacity = 10;
}

template <class T>
int Vector<T>::size(){
    return this->length;
}

template <class T>
void Vector<T>::pushBack(T data){
    vector.addBack(data);
}

template <class T>
T Vector<T>::popBack(){
    if(this->size() == 0) return -1;
    T data = vector.getLast();
    vector.removeBack();

    return data;
}

template <class T>
T Vector<T>::getEl(int index){
    return vector.getElById(index);
}

template <class T>
T Vector<T>::getFirst(){
    return vector.getFirst();
}

template <class T>
T Vector<T>::getLast(){
    return vector.getLast();
}