#include "calculator.hpp"
#include <stdexcept>

int Calculator::add(int a, int b) const 
{
  return this->mathService.add(a, b);
}

int Calculator::subtract(int a, int b) const 
{
  return this->mathService.subtract(a, b);
}

int Calculator::multiply(int a, int b) const 
{
  return this->mathService.multiply(a, b);
}

double Calculator::divide(int a, int b) const 
{
  if (b == 0) {
      throw std::invalid_argument("Division by zero");
  }
  return this->mathService.divide(a, b);
}