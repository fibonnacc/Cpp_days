
#include "BitcoinExchange.hpp"

std::map<std::string, double> Parsser::getter() {
  return lst;
}

void Parsser::StoreInput(std::string &str) {
  size_t begin = 0;
  size_t end = 0;

  std::map<std::string, double> maps;

  end = str.find('|', begin);
  if (end == std::string::npos) {
    throw std::runtime_error("Missing delimiter '|' in input line: " + str);
  }

  std::string leftPart = str.substr(begin, end - begin);

  begin = end + 1;

  std::string rightPart = str.substr(begin);

  double value = std::strtod(rightPart.c_str(), NULL);
  std::cout << "the value : " << value << std::endl;
  maps[leftPart] = value;
}

void  Parsser::ReadFromFile(char *str, Parsser& SomeOne) {
  std::ifstream Input(str);
  if (!Input) {
    throw std::runtime_error("Faile could not be opened");
  }
  std::string line;
  while (1) {
    try {
      if (!std::getline(Input, line)) {
        break;
      }
      SomeOne.StoreInput(line);
    }
    catch (std::exception &e) {
      std::cout << "Error : " << e.what() << std::endl;
    }
  }
}

void Parsser::ParseInput() {
}
