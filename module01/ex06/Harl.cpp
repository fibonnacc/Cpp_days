#include "Harl.hpp"

void  Harl::debug()
{
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << DEBUG << std::endl;
}

void  Harl::info()
{
  std::cout << "[ INFO ]" << std::endl;
  std::cout << INFO << std::endl;
}

void  Harl::warning()
{
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << WARNING << std::endl;
}

void  Harl::error()
{
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << ERROR << std::endl;
}

void  invalid()
{
  std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void  Harl::complain(std::string level)
{
  std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  
  int i = 0;
  while (i < 4)
  {
    if (level == arr[i])
    {
      break;
    }
    i++;
  }
  switch (i)
  {
  case 0:
    debug();
    std::cout << std::endl;
  case 1:
    info();
    std::cout << std::endl;
  case 2:
    warning();
    std::cout << std::endl;
  case 3:
    error();
    break;
  default:
    invalid();
  }
}
