#include "math_service.hpp"
#include <stdexcept>

int MathService::add(int a, int b) const 
{
    return a + b;
}

int MathService::subtract(int a, int b) const {
    return a - b;
}

int MathService::multiply(int a, int b) const {
    return a * b;
}

double MathService::divide(int a, int b) const {
    
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }

    return static_cast<double>(a) / b;
}
