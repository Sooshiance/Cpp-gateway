#include <iostream>
#include <cstdint>

void First()
{
    std::int32_t x{};

    std::cout << "what's the value? \t";
    std::cin >> x;
    std::cout << "the value of x in First function is : \t" << x;
    std::cout << "\n" << "\n";
}

void Second()
{
    std::int32_t x{};

    std::cout << "what's the value?\t";
    std::cin >> x;
    std::cout << "the value of x in Second function is : \t" << x;
    std::cout << "\n" << "\n";
}

int main()
{
    std::int32_t x{};

    First();
    Second();

    std::cout << "what's the value?\t";
    std::cin >> x;
    std::cout << "the value of x in Main function is : \t" << x;
    std::cout << "\n" << "\n";

    return 0;
}