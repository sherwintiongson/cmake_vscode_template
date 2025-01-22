#include "account.hpp"
#include <stdexcept>

account::account(/* args */)
{
  this->balance = 0;
}

account::~account()
{
  // empty
}

void account::deposit(uint32_t value)
{
  this->balance = this->balance + value;
}

void account::withdraw(uint32_t value)
{
  if(this->balance < value)
  {
    throw std::runtime_error("Not enough funds!");
  }
  else
  {
    this->balance = this->balance - value;
  }
}


uint64_t account::getBalance(void)
{
  return this->balance;
}

void account::transfer(account& dest, uint16_t source)
{
  this->withdraw(source);
  dest.deposit(source);
}