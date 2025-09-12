#include "Harl.hpp"

void  Harl::debug()
{
  std::cout << DEBUG << std::endl;
}

void  Harl::info()
{
  std::cout << INFO << std::endl;
}

void  Harl::warning()
{
  std::cout << WARNING << std::endl;
}

void  Harl::error()
{
  std::cout << ERROR << std::endl;
}

void  Harl::complain(std::string level)
{
  Harl obj;
  void  (Harl::*fun_pointer[4])(void) = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
  std::string arr[4] = {"WARNING", "ERROR", "DEBUG", "INFO"};
  
  for (size_t i = 0; i < 4; i++)
  {
    if (level == arr[i])
    {
      (obj.*fun_pointer[i])();
    }
  }
}
