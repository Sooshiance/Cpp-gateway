// in here programmer expected 3 
// but it will print out : 312142
// becuase of / character, that comes after n

#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	std::cout << add(1, 2) << '/n';
	std::cout << '\n';

    return 0;
}