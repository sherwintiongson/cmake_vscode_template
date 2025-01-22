#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "math_service.hpp"

class Calculator 
{
  private:
      const MathService& mathService;

  public:
      Calculator(const MathService& mathService_) : mathService(mathService_) {}
      int add(int a, int b) const;
      int subtract(int a, int b) const;
      int multiply(int a, int b) const;
      double divide(int a, int b) const;
};

#endif // CALCULATOR_H
