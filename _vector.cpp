#include "_vector.h"

template <class T>
neu3n0::vector<T>::vector(size_t sz) {
    _size = sz;
    _capacity = 2 * _size;
    arr = new T[_size];
}

template <class T>
neu3n0::vector<T>::~vector() {
    delete[] arr;
}

template <class T>
size_t neu3n0::vector<T>::size() const {
    return _size;
}

template <class T>
size_t neu3n0::vector<T>::capacity() const {
    return _capacity;
}

template <class T>
bool neu3n0::vector<T>::empty() const {
    return _size == 0;
}

// template <class T>
// void neu3n0::vector<T>::resize(size_t sz, const T& = T()) {
     
// }

// template <class T>
// void neu3n0::vector<T>::reserve(size_t sz) {
    
// }