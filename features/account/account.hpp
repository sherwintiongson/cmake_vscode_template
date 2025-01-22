#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cstdint>

class account
{
private:
  uint64_t balance;
public:
  account(/* args */);
  ~account();
  void deposit(uint32_t value);
  void withdraw(uint32_t value);
  uint64_t getBalance(void);
  void transfer(account& dest, uint16_t source);
};

#endif  // ACCOUNT_H