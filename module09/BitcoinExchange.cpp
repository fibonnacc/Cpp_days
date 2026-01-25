
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
      throw std::runtime_error("Something change in file");
    }
  }
  while (1) {
    if (!std::getline(Input, line)) {
      break;
    }
    Parsser::split_data(line, Boss);
  }
  Print_(Boss.lst);
}

void Parsser::OpenCsvFile(Parsser &Boss) {
  try {
    std::ifstream Input("data.csv");
    if (!Input) {
      throw std::runtime_error("Faile could not be opened");
    }
    Parsser::read_and_store(Boss, Input);
  }
  catch (const std::exception&) {
  }
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

  begin = end + 2;

  std::string rightPart = str.substr(begin);

  double value = std::strtod(rightPart.c_str(), NULL);
  maps[leftPart] = value;
  Parsser::Print_list(maps);
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
