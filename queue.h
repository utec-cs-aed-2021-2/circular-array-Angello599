#include "circulararray.h"

template <typename T>
class QueueArray : public CircularArray<T> { 
public:
    QueueArray();
    QueueArray(int _capacity);
    T front();
    T rear();
    void enqueue(T data);
    T dequeue();
};


template <class T>
QueueArray<T>::QueueArray() {
    QueueArray(0);
}

template <class T>
QueueArray<T>::QueueArray(int _capacity) {
    this->array = new T[_capacity];
    this->capacity = _capacity;
    this->front = this->back = -1;
}

template <class T>
T QueueArray<T>::front() {
    if (this->is_empty()) {
        throw("is empty");
    }
    else {
        return this->array[this->front];
    }
}

template <class T>
T QueueArray<T>::rear() {
    if (this->is_empty()) {
        throw("is empty");
    }
    else {
        return this->array[this->back];
    }
}

template <class T>
void QueueArray<T>::enqueue(T data) {
    this->push_back(data);
}

template <class T>
T QueueArray<T>::dequeue() {
    return this->pop_front();
}