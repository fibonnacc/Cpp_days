
#include "BitcoinExchange.hpp"

std::map<std::string, double> Parsser::getter() {
  return lst;
}

void  Parsser::split_data(std::string& line, Parsser& Boss) {
  size_t begin = 0;
  size_t end = 0;

  end = line.find(',', begin);
  std::string rightSide = line.substr(begin, end - begin);

  begin = end + 1;
  std::string leftSide = line.substr(begin);

  double value = std::strtod(leftSide.c_str(), NULL);
  Boss.lst[rightSide] = value;
}

void Parsser::ParseInput() {
}
