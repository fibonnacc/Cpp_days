#include <iostream>
#include <fstream>

std::ostream &cout = std::cout;

int main (int argc, char *argv[])
{
  float x = 0.1f + 0.2f;
  float y = 0.3f;
  if (x == y)
  {
    cout << "x and y both equal!" << std::endl;
  }
  else {
    cout << "x and y are not equal" << std::endl;
  }
  return 0;
}
