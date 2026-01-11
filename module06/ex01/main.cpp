#include "Data.hpp"
#include "Serializer.hpp"

int main () {
  Data *data1 = new Data();

  uintptr_t value = Serializer::serialize(data1);

  Data *data2 = Serializer::deserialize(value);

  std::cout << "the name : " << data2->name << std::endl;
  std::cout << "the age : " << data2->age << std::endl;
  std::cout << "the nickname : " << data2->nickname << std::endl;

  std::cout << "\n*********************************" << std::endl;
  std::cout << "the address of data1 : " << data1 << std::endl;
  std::cout << "the address of data2 : " << data2 << std::endl;
  if (data1 == data2)
    std::cout << "Verification Successfully!" << std::endl;
  delete data1;
  return 0;
}
