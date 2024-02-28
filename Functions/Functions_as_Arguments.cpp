#include <functional>
#include <iostream>
#include <cstdint>

int add(std::int32_t x, std::int32_t y)
{
    return x + y;
}

int multiply(std::int32_t x, std::int32_t y)
{
    return x * y; 
}

int invoke(std::int32_t x, std::int32_t y, std::function<std::int32_t(std::int32_t, std::int32_t)> func)
{
	return func(x, y);
}

int main()
{
	// Pass the required function as
	// parameter using its name
	std::cout << "Addition of 20 and 10 is\t";
	std::cout << invoke(20, 10, &add) << '\n';

	std::cout << "Multiplication of 20" << " and 10 is\t";
	std::cout << invoke(20, 10, &multiply) << '\n';

	return 0;
}
