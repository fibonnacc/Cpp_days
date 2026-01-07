
#ifndef DATA

#define DATA

#include <iostream>

struct Data {
  std::string name;
  int age;
  std::string nickname;

  Data() : name("Hicham"), age(21), nickname("elfatihi") {
  }
  ~Data(){
  }
};

#endif
