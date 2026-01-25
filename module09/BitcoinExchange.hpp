
#ifndef BITCOINEXCHANGE

#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

struct Parsser {
  private:
    std::map<std::string, double> lst;
  public:
    static void  Print_list(Parsser& Boss);
    std::map<std::string, double> getter();
    static void  ReadFromFile(char *str, Parsser& SomeOne);
    void  StoreInput(std::string &str);
    static void  ParseInput();
};

#endif // !DEBUG
