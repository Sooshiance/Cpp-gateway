#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: \n"; // assume the user enters more than 2 chars

    char ch{};
    
    std::cin >> ch; // ch = 'first in sequence' will print
    std::cout << "You entered: " << ch << '\n';

    std::cin >> ch; // ch = 'second in sequence' will print
    std::cout << "You entered: " << ch << '\n';

    return 0;
}