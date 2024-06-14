#include <iostream>
#include <stdint.h>
#include "main.h"
#include "folder1/folder1.h"
#include "folder2/folder2.h"

int main()
{
    std::cout << "Hello Cmake 1" << std::endl;
    std::cout << "Hello Cmake 2" << std::endl;
    std::cout << "Hello Cmake 3" << std::endl;
    std::cout << "Hello Cmake 4" << std::endl;
    std::cout << "Hello Cmake 5" << std::endl;
    std::cout << "Hello Cmake 6" << std::endl;
    std::cout << "Hello Cmake 7" << std::endl;
    std::cout << "Hello Cmake 8" << std::endl;

    uint16_t i = 0;

    i = i + 125;

    folder1();
	folder2();

    getchar();

    return 0;
}
