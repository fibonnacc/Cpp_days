#include <iostream>

using  namespace std;

class PhoneBook
{
  private:
    int i;
  public:
    string arr[8];
    void  set_value(int j)
    {
      i = j;
    }
    void  fill_contact(string number)
    {
      if (i < 8)
      {
        arr[i] = number;
        cout << &arr[i++] << endl;
      }
    }
};

int main (int argc, char *argv[])
{
  PhoneBook s1;
  int i = 1;
  while (i < argc)
  {
    if (i - 1 == argc)
    {
      s1.fill_contact(NULL);
      break;
    }
    s1.set_value(i - 1);
    s1.fill_contact(argv[i]);
    i++;
  }
  return 0;
}
