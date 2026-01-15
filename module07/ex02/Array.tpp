#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>

template <typename T>
Array<T>::Array() : _element(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
  if (n > 0)
    _element = new T[n]();
  else
    _element = NULL;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _element(NULL), _size(0) {
  this->_size = other._size;
  if (this->_size > 0) {
    this->_element = new T[this->_size]();
    for (unsigned int i = 0; i < this->_size; i++) {
      this->_element[i] = other._element[i];
    }
  }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
  if (this != &other) {
    if (this->_element)
      delete[] this->_element;

    this->_size = other._size;
    if (this->_size > 0) {
      this->_element = new T[this->_size]();
      for (unsigned int i = 0; i < this->_size; i++) {
        this->_element[i] = other._element[i];
      }
    } else {
      this->_element = NULL;
    }
  }
  return *this;
}

template <typename T>
Array<T>::~Array() {
  delete[] _element;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
  if (index >= _size) {
    throw std::out_of_range("Index out of bounds");
  }
  return _element[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
  if (index >= _size) {
    throw std::out_of_range("Index out of bounds");
  }
  return _element[index];
}

template <typename T>
unsigned int Array<T>::size() const {
  return _size;
}

#endif
