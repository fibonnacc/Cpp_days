/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:45 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 14:58:46 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void Print_(std::map<std::string, double> &map) {
  std::map<std::string, double>::iterator it_b = map.begin();
  std::map<std::string, double>::iterator it_e = map.end();

  for (; it_b != it_e; it_b++) {
    std::cout << std::fixed << "[" << it_b->first << "]" << "->" << "[" << it_b->second << "]" << std::endl;
  }
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
