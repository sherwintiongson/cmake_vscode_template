#include <lib_private.h>
#include <iostream>
#include <private_header.h>

void private_print_hello()
{
    std::cout << "Hello, Private!" << std::endl;

    std::cout << "Press Enter to continue...";
}