#include <iostream>

using namespace std;

class PhoneBook
{
  private:
    std::string x;
    std::string y;
  public:
  void  fun(std::string &phone)
  {
    x = phone;
  }
  std::string  get_value()
  {
    return(x);
  }
};

int main(void)
{
  PhoneBook owner;
  std::string f1 = "hello hicham";
  owner.fun(f1);
  cout << owner.get_value() << endl;
  return 0;
}
