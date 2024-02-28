#include <iostream>
#include "Square.h"

void doSomething(); // forward declaration for function doSomething()

#define PRINT

int main()
{
    doSomething();

    std::cout << "a square has " << getSquareSides() << " sides\n";
    std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';

    return 0;
}