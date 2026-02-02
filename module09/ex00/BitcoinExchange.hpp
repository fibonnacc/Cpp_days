/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfatih <helfatih@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:58:53 by helfatih          #+#    #+#             */
/*   Updated: 2026/02/02 16:41:55 by helfatih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
#include <iomanip>
#include <climits>
#include <sstream>
#include <map>
#include <queue>

class Parsser {
private:
  std::map<std::string, double> lst;
public:
  /************Method************/
  std::map<std::string, double> getter();
  static void  ReadFromFile(char *str, Parsser& SomeOne);
  void  StoreInput(std::string &str);
  static void OpenCsvFile(Parsser &Boss);
  static void  split_data(std::string& line, Parsser& Boss);
  static void  read_and_store(Parsser &Boss, std::ifstream& Input);
  static void  parse_right_left(std::string& str, const int i);
  void   ExchangeBitcoin(std::map<std::string, double> &maps);

  /************Canonical Orthodox************/
  Parsser();
  Parsser(const Parsser& other);
  Parsser& operator=(const Parsser& other);
  ~Parsser();
};

#endif
