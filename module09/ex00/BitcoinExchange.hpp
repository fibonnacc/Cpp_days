
#ifndef BITCOINEXCHANGE

#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
#include <map>

struct Parsser {
private:
  std::map<std::string, double> lst;
public:
  static void Print_list(std::map<std::string, double> &map);
  std::map<std::string, double> getter();
  static void  ReadFromFile(char *str, Parsser& SomeOne);
  void  StoreInput(std::string &str);
  static void  ParseInput();
  static void OpenCsvFile(Parsser &Boss);
  static void  split_data(std::string& line, Parsser& Boss);
  static void  read_and_store(Parsser &Boss, std::ifstream& Input);
};

#endif // !DEBUG
