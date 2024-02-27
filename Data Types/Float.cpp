#include <iostream>
#include <iomanip> // for output manipulator std::setprecision()

int main()
{
    float a{};
    float b{};

    std::cin >> a;
    std::cin >> b;

    std::cout << std::setprecision(5); // show 17 digits of precision

    std::cout << '\n' << a << '\n';
    std::cout << b <<'\n';
    
    return 0;
}