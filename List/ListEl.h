#ifndef LISTEL_H
#define LISTEL_H

template<typename T>
class delete_me {
public:
    static void destroy(T &value) {
    }
};

template<typename P>
class delete_me<P *> {
public:
    static void destroy(P *value) {
        delete value;
    }
};

template <class T>
class ListEl{

private:
T data;
ListEl<T> * prev;
ListEl<T> * next;


public:
ListEl(T data);

~ListEl();



void setPrev(ListEl<T> * prev);

void setNext(ListEl<T> * next);

void setData(T);

T getData();

T& getReference();

ListEl<T> * getNext();

ListEl<T> * getPrev();


};

#include "ListEl.cpp"
#endif