#include <lib.h>
#include <stdint.h>

int main()
{
    while (true)
    {
        for (uint32_t i = 0; i < 200; i++)
        {
            print_hello();
        }
    }
    return 0;
}