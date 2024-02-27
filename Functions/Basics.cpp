#include <iostream>
#include <cstdint>
#include <iomanip>

void Print()
{
    std::cout << "Hello world!\n" << std::endl;
}

int Add(std::int32_t a, std::int32_t b)
{
    return a + b;
}

double Divide(double x, double y)
{
    return x / y;
}

int main()
{
    Print();

    // You can't invoke a void function in cout
    // line below, will throw an error

    // std::cout << Print();

    std::int32_t a{0}, b{0};
    double x{0}, y{0}, z{0};

    std::cout << std::fixed << std::showpoint;    // to be able use setprecision()

    std::cout << std::setprecision(2);

    std::cout << "enter a : \n";
    std::cin >> a;
    std::cout << "enter b : \n";
    std::cin >> b;

    std::cout << "\nThe result of add is \t" << Add(a, b);

    std::cout << "\n" << std::endl;

    std::cout << "enter x : \n";
    std::cin >> x;
    std::cout << "enter y : \n";
    std::cin >> y;

    std::cout << "\n" << std::endl;

    z = Divide(x, y);

    std::cout << z << "\t" << Divide(x, y);

    std::cout << "\n";

    return 0;
}