
#include "BitcoinExchange.hpp"

void Parsser::Print_list(Parsser& Boss) {
    std::map<std::string, double>::iterator it_b = Boss.lst.begin(); // Begin iterator
    std::map<std::string, double>::iterator it_e = Boss.lst.end();   // End iterator

    for (; it_b != it_e; ++it_b) {
        std::cout << "[" << it_b->first << ": " << it_b->second << "] --> ";
    }
    std::cout << "NULL" << std::endl;
}


int main (int ac, char *argv[]) {
  try {
    if (ac != 2) {
      throw std::runtime_error("Expect two argument!");
    }
    Parsser Boss;
    Parsser::ReadFromFile(argv[1], Boss);
    Parsser::Print_list(Boss);
  }
  catch (std::exception &e) {
    std::cerr << "Error : " << e.what() << std::endl;
  }
  return 0;
}
