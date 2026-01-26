
#include "BitcoinExchange.hpp"

void Parsser::Print_list(std::map<std::string, double> &map) {
  std::map<std::string, double>::iterator it_b = map.begin();

  std::cout << std::fixed << "[" << it_b->first << "]" << "->" << "[" << it_b->second << "]" << std::endl;
}

int main (int ac, char *argv[]) {
  try {
    if (ac != 2) {
      throw std::runtime_error("Expect two argument!");
    }
    Parsser Boss;
    Parsser::OpenCsvFile(Boss);
    Parsser::ReadFromFile(argv[1], Boss);
  }
  catch (std::exception &e) {
    std::cerr << "Error : " << e.what() << std::endl;
  }
  return 0;
}
