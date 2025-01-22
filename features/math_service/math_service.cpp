#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "math_service.hpp"
#include <stdexcept>

class Calculator {
private:
    const MathService& mathService;

public:
    Calculator(const MathService& mathService_) : mathService(mathService_) {}

    int add(int a, int b) const {
        return mathService.add(a, b);
    }

    int subtract(int a, int b) const {
        return mathService.subtract(a, b);
    }

    int multiply(int a, int b) const {
        return mathService.multiply(a, b);
    }

    double divide(int a, int b) const {
        if (b == 0) {
            throw std::invalid_argument("Division by zero");
        }
        return mathService.divide(a, b);
    }
};

#endif // CALCULATOR_H
