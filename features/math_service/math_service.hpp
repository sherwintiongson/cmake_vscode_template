#ifndef MATHSERVICE_H
#define MATHSERVICE_H

#include "imath_service.hpp"
#include <stdexcept>

class MathService : public IMathService 
{
public:
  int add(int a, int b) const override;
  int subtract(int a, int b) const override;
  int multiply(int a, int b) const override;
  double divide(int a, int b) const override;
};

#endif // MATHSERVICE_H
