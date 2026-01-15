#ifndef ARRAY

#define ARRAY

#include <iostream>

template<typename T>
class Array {
private:
  T *_element;
  unsigned int _size;
public:
  unsigned int size() const;
  Array();
  T& operator[](unsigned int index);
  const T& operator[](unsigned int index) const;
  Array(unsigned int n);
  Array(const Array& other);
  Array& operator=(const Array& other);
  ~Array();
};

#endif
