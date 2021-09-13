#include "circulararray.h"

template <typename T>
class StackArray : public CircularArray<T> { 
public:
    StackArray();
    StackArray(int _capacity);
    T top();
    void push(T data);
    T pop();
};

template <class T>
StackArray<T>::StackArray() {
    StackArray(0);
}

template <class T>
StackArray<T>::StackArray(int _capacity) {
    this->array = new T[_capacity];
    this->capacity = _capacity;
    this->front = this->back = -1;
}

template <class T>
T StackArray<T>::top() {
    if (this->is_empty()) {
        throw("is empty");
    }
    else {
        return this->array[this->front];
    }
}

template <class T>
void StackArray<T>::push(T data) {
    this->push_back(data);
}

template <class T>
T StackArray<T>::pop() {
    return (this->pop_back());
}