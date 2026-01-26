
#include "BitcoinExchange.hpp"

std::map<std::string, double> Parsser::getter() {
  return lst;
}

void Print_(std::map<std::string, double> &map) {
  std::map<std::string, double>::iterator it_b = map.begin();
  std::map<std::string, double>::iterator it_e = map.end();

  for (; it_b != it_e; it_b++) {
    std::cout << std::fixed << "[" << it_b->first << "]" << "->" << "[" << it_b->second << "]" << std::endl;
  }
}

void  Parsser::split_data(std::string& line, Parsser& Boss) {
  size_t begin = 0;
  size_t end = 0;

  end = line.find(',', begin);
  std::string rightSide = line.substr(begin, end - begin);

  begin = end + 1;
  std::string leftSide = line.substr(begin, end - begin);

  double value = std::strtod(rightSide.c_str(), NULL);
  Boss.lst[rightSide] = value;
}

void Parsser::ParseInput() {
}
