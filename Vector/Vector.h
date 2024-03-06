#ifndef VECTOR_H
#define VECTOR_H

template <class T>
class Vector{

private:
int length;
int capacity;
T data[];

void expand();

void shrink();


public:

template <typename... Args>
Vector(Args... data);

~Vector();

void clear();

int size();

void pushBack(T data);

T popBack();

void pushFront(T data);

T popFront();

T operator[](int index) const;

T& operator[](int index);

T getFirst();

T getLast();


};



#include "Vector.cpp"
#endif