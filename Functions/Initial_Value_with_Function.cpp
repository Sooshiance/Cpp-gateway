#include <iostream>
#include <cstdint>

int getValue()
{
    std:;int32_t k{};

    std::cout << "enter  k\n";
    std::cin >> k;
    return k;
}

int Add(std::int32_t x)
{
    return x + x;
}

int main()
{
    std::int32_t a{getValue()};

    std::cout << "\n" << Add(a) << std::endl;

    return 0;
}