#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
  this->_accountIndex = Account::_nbAccounts;
  this->_amount = initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;

  Account::_nbAccounts++;
  Account::_totalAmount += initial_deposit;

  Account::_displayTimestamp();

  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";created" << std::endl;
}

Account::~Account()
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
            << ";amount:" << this->_amount
            << ";closed" << std::endl;
}

int Account::getTotalAmount()
{
  return (Account::_totalAmount);
}

int Account::getNbAccounts()
{
  return (Account::_nbAccounts);
}

int Account::getNbWithdrawals()
{
  return (Account::_totalNbWithdrawals);
}

int Account::getNbDeposits()
{
  return (Account::_totalNbDeposits);
}

void Account::displayAccountsInfos(void)
{
  Account::_displayTimestamp();
  std::cout << "accounts:" << Account::_nbAccounts
    << ";total:" << Account::_totalAmount
    << ";deposits:" << Account::_totalNbDeposits
    << ";withdrawals:" << Account::_totalNbWithdrawals 
    << std::endl;
}

void Account::displayStatus(void) const
{
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount
    << ";deposits:" << this->_nbDeposits
    << ";withdrawals:" << this->_nbWithdrawals 
    << std::endl;
}


void	Account::makeDeposit( int deposit )
{
  int prev_amount = this->_amount;
  this->_amount += deposit;
  this->_nbDeposits++;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;
  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << prev_amount
    << ";deposit:" << deposit
    << ";amount:" << this->_amount
    << ";nb_deposits:" << this->_nbDeposits 
    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
  if (withdrawal > this->_amount)
  {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
      << ";p_amount:" << this->_amount
      << ";withdrawal:refused" << std::endl;
    return false;
  }

  int prev_amount = this->_amount;
  this->_amount -= withdrawal;
  this->_nbWithdrawals++;
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals++;

  Account::_displayTimestamp();
  std::cout << "index:" << this->_accountIndex
    << ";p_amount:" << prev_amount
    << ";withdrawal:" << withdrawal
    << ";amount:" << this->_amount
    << ";nb_withdrawals:" << this->_nbWithdrawals 
    << std::endl;
  return true;
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(0);
    std::tm* timeinfo = std::localtime(&now);
    
    std::cout << "[" << (timeinfo->tm_year + 1900)
              << std::setfill('0') << std::setw(2) << (timeinfo->tm_mon + 1)
              << std::setfill('0') << std::setw(2) << timeinfo->tm_mday
              << "_"
              << std::setfill('0') << std::setw(2) << timeinfo->tm_hour
              << std::setfill('0') << std::setw(2) << timeinfo->tm_min
              << std::setfill('0') << std::setw(2) << timeinfo->tm_sec
              << "] ";
}

