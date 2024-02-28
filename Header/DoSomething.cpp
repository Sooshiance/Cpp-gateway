#include <iostream>

void doSomething()
{
#ifdef NOTPRINT
    std::cout << "Printing!\n";
#endif

#ifndef PRINT
    std::cout << "Not printing!\n";
#endif

}