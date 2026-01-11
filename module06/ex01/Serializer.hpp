
#ifndef SERIALIZER

#define SERIALIZER

#include <iostream>
#include "Data.hpp"

class Serializer {
public:
  static uintptr_t serialize(Data* ptr);
  static Data* deserialize(uintptr_t raw);

  Serializer();
  Serializer(const Serializer &);
  Serializer &operator=(const Serializer &);
  ~Serializer();
private:
};

#endif // !DEBUG
