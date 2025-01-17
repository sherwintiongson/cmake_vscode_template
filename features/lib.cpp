#include <lib.h>
#include <lib_private.h>
#include <cstdint>

void print_hello()
{
    private_print_hello();
}

uint32_t add_numbers(uint16_t x, uint16_t y)
{
  return x + y;
}

bool isPositive(int32_t num)
{
    return num >= 0;
}