
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


void  Parsser::read_and_store(Parsser &Boss, std::ifstream& Input) {
  std::string line;
  if (std::getline(Input, line)) {
    if (line != "date,exchange_rate") {
      throw std::runtime_error("File has no Title");
    }
  }
  while (1) {
    if (!std::getline(Input, line)) {
      break;
    }
    Parsser::split_data(line, Boss);
  }
  // Print_(Boss.lst);
}

void Parsser::OpenCsvFile(Parsser &Boss) {
  try {
    std::ifstream Input("data.csv");
    if (!Input) {
      throw std::runtime_error("Faile could not be opened");
    }
    Parsser::read_and_store(Boss, Input);
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }
}

void  print_vector(std::vector<std::string> vec) {
  std::vector<std::string>::iterator it_b = vec.begin();
  std::vector<std::string>::iterator it_e = vec.end();

  for (; it_b != it_e; it_b++) {
    std::cout << "[" << *it_b << "]" << "->";
  }
  std::cout << "NULL" << std::endl;
}

std::vector<std::string> split(const std::string& s) {
  std::vector<std::string> tokens;
  std::string token;
  std::stringstream tokenStream(s);

  while (std::getline(tokenStream, token, '-')) {
    tokens.push_back(token);
  }
  return tokens;
}

void  parse_left_part(std::string& str) {
  // 2011-01-03
  std::vector<std::string> tokens = split(str);

  // parse the token 
  std::vector<std::string>::iterator it_b = tokens.begin();
  std::vector<std::string>::iterator it_e = tokens.end();

  for (; it_b != it_e; it_b++) {
    std::string value = *it_b;
    for (size_t i = 0; i < value.size() ; i++) {
      std::cout << value[i];
    }
    std::cout << std::endl;
  }
  print_vector(tokens);
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
  try {
    parse_left_part(leftPart);
  }
  catch (const std::exception& e) {
    std::cout << "Error : " << e.what() << std::endl;
  }

  begin = end + 2;

  std::string rightPart = str.substr(begin);

  double value = std::strtod(rightPart.c_str(), NULL);
  maps[leftPart] = value;
  // Parsser::Print_list(maps);
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
