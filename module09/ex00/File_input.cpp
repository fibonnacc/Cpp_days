#include "BitcoinExchange.hpp"

std::vector<std::string> split(const std::string& s, const int i) {
  std::vector<std::string> tokens;
  std::string token;
  std::stringstream tokenStream(s);
  int value = 0;

  if (i == 3) {
    while (std::getline(tokenStream, token, '-')) {
      value++;
      tokens.push_back(token);
    }
    if (value != i) {
      throw std::runtime_error("Bad input : Year-Month-Day");
    }
  }
  else if (i == 1) {
    if (!std::getline(tokenStream, token)) {
      throw std::runtime_error("getline failed");
    }
    tokens.push_back(token);
  }
  return tokens;
}

void  print_vector(std::vector<std::string> vec) {
  std::vector<std::string>::iterator it_b = vec.begin();
  std::vector<std::string>::iterator it_e = vec.end();

  for (; it_b != it_e; it_b++) {
    std::cout << "[" << *it_b << "]";
  }
}

void isMoreThanIntMax(std::string &str) {
  double value = strtod(str.c_str(), NULL);
  if (value > 1000) {
    throw std::runtime_error("too large a number");
  }
  if (value < 0) {
    throw std::runtime_error("Not a positive number");
  }
}

bool isFloat(const std::string& str) {
  char* ptr;
  std::strtod(str.c_str(), &ptr);
  return (ptr != str.c_str() && *ptr == '\0');
}

void  Parsser::parse_right_left(std::string& str, const int i) {
  std::vector<std::string> tokens = split(str, i);

  std::vector<std::string>::iterator it_b = tokens.begin();
  std::vector<std::string>::iterator it_e = tokens.end();

  for (; it_b != it_e; it_b++) {
    std::string value = *it_b;
    if (value[0] == '\0')
      throw std::runtime_error("Bad input => '" + value + "'");
    for (size_t i = 0; i < value.size() ; i++) {
      isMoreThanIntMax(value);
      if (!std::isdigit(value[i]) && !isFloat(value)) {
        throw std::runtime_error("Bad input => '" + value + "'");
      }
    }
  }
}

void  Parsser::ExchangeBitcoin(std::map<std::string, double> &maps)
{
  std::map<std::string, double>::iterator it_b1 = maps.begin();
  std::map<std::string, double>::iterator it_e1 = maps.end();

  for (; it_b1 != it_e1; it_b1++) {
    std::string key1 = it_b1->first;

    std::map<std::string, double>::iterator it_b2 = this->lst.begin();
    std::map<std::string, double>::iterator it_e2 = this->lst.end();
    for (; it_b2 != it_e2; it_b2++) {
      if (key1 == it_b2->first) {
        std::cout  << it_b1->second * it_b2->second << std::endl;
        break;
      }
      else if (key1 < it_b2->first) {
        --it_b2;
        std::cout  << it_b1->second * it_b2->second << std::endl;
        break;
      }
    }
    if (it_b2 == it_e2) {
      std::cout  << it_b1->second * it_e2->second << std::endl;
    }
  }
}

void Parsser::StoreInput(std::string &str) {

  std::stringstream tokenStream(str);
  std::string leftPart;
  std::string rightPart;
  std::map<std::string, double> maps;

  if (str.find('|', 0) == std::string::npos) {
    throw std::runtime_error("Missing delimiter '|' in input line: " + str);
  }

  for (size_t i = 0; i < 2; i++) {
    if (i % 2 == 0) {
      if (!std::getline(tokenStream, leftPart, '|'))
        throw std::runtime_error("getline fails");
    }
    else if (i % 2) {
      if (!std::getline(tokenStream, rightPart))
        throw std::runtime_error("getline fails");
    }
  }
  if (leftPart[leftPart.length() - 1] != ' ') {
    throw std::runtime_error("You must follow this format {data | value}");
  }
  leftPart.erase(leftPart.length() - 1, 1);
  if (rightPart[0] != ' ') {
    throw std::runtime_error("You must follow this format {data | value}");
  }
  rightPart.erase(0, 1);
  try {
    Parsser::parse_right_left(leftPart, 3);
    Parsser::parse_right_left(rightPart, 1);
    maps[leftPart] = std::strtod(rightPart.c_str(), NULL);

    std::cout << leftPart << " => " << rightPart << " = ";
    ExchangeBitcoin(maps);
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }
  // Parsser::Print_list(maps);
}

void  check_title(std::ifstream &Input, std::string& line) {
  if (!std::getline(Input, line)) {
    return ;
  }
  if (line != "date | value") {
    throw std::runtime_error("Title is requirement {data | value}!");
  }
}

void  Parsser::ReadFromFile(char *str, Parsser& SomeOne) {
  std::ifstream Input(str);
  int i = 0;
  if (!Input) {
    throw std::runtime_error("Faile could not be opened");
  }
  std::string line;
  while (1) {
    try {
      if (i == 0) {
        check_title(Input, line);
      }

      if (!std::getline(Input, line)) {
        break;
      }
      SomeOne.StoreInput(line);
    }
    catch (std::exception &e) {
      std::cout << "Error : " << e.what() << std::endl;
    }
    i++;
  }
}
