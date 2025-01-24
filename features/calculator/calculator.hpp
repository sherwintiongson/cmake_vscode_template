#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "math_service.hpp"

class Calculator 
{
  private:
      const MathService& mathService;

  public:
      Calculator(const MathService& mathService_) : mathService(mathService_) {}
      int cal_add(int a, int b) const;
      int cal_subtract(int a, int b) const;
      int cal_multiply(int a, int b) const;
      double cal_divide(int a, int b) const;
};

#endif // CALCULATOR_H
