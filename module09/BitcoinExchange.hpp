
#ifndef BITCOINEXCHANGE

#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>

struct Parsser {
  private:
    std::list<std::string> lst;
  public:
    void  StoreInput();
    void  ParseInput();
};

#endif // !DEBUG
