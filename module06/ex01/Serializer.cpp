#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
  uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
  return (value);
}

Data* Serializer::deserialize(uintptr_t raw) {
  Data *data = reinterpret_cast<Data *>(raw);
  return (data);
}

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &) {
}

Serializer &Serializer::operator=(const Serializer &) {
  return *this;
}

Serializer::~Serializer() {
}
