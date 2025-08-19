#include <iostream>

int main (int argc, char *argv[])
{
  int j = 1;
  if (argc == 1)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (1);
  }
  while (argv[j])
  {
    int i = 0;
    while (argv[j][i])
    {
      if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
        argv[j][i] -= 32;
      std::cout << argv[j][i];
      i++;
    }
    j++;
  }
  std::cout << '\n';
  return 0;
}
