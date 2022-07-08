// #pragma once
#include <iostream>

namespace neu3n0 {
    template <class T>
    class vector {
    public:
        vector() {}
        vector(size_t sz);
        ~vector();
        size_t size() const;
        size_t capacity() const;
        bool empty() const;
        // void resize(size_t sz, const T& value);
        // void reserve(size_t sz);
        // push_back
        // shrink_to_fit
        // max_size
        // clear
        // insert
        // emplace
        // erase
        // pop_back
        // emplace_back
        // swap
        // operator[]
        // at
        // front
        // back
        // data
        // operator=
        // assign
        
    private:
        T* arr{nullptr};
        size_t _size{0};
        size_t _capacity{0};
    };
}
