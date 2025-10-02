#include <iostream>

class Zome
{
public:
  int a;
  Zome(int b)
  {
    a = b;
  }
};

Zome* heap()
{
  Zome* f = new Zome(0);
  std::cout << "this is the address of f : " << f << std::endl;
  return(f);
}

Zome stack()
{
  Zome s(1);
  std::cout << "this is the address of s : " << &s << std::endl;
  return(s);
}

int main (int argc, char *argv[])
{
  Zome* f = heap();
  std::cout << "this is the address of f : " << f << std::endl;

  Zome s = stack();
  std::cout << "this is the address of s : " << &s << std::endl;
  return 0;
}

