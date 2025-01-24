#include <stdint.h>
#include <iostream>
#include "math_service.hpp"
#include "calculator.hpp"

int main()
{
    MathService ms;
    Calculator obj(ms);
    while (true)
    {
        for (uint32_t i = 0; i < 200; i++)
        {
           std::cout << "main loop" << std::endl;
        }
    }
    return 0;
}