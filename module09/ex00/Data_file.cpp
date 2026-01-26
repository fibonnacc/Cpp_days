#include "BitcoinExchange.hpp"

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
