#include <stdint.h>
#include <iostream>

int main()
{
    while (true)
    {
        for (uint32_t i = 0; i < 200; i++)
        {
           std::cout << "main loop" << std::endl;
        }
    }
    return 0;
}