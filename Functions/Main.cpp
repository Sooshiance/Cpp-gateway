#include <iostream>

// to run these files : list all the other cpp files after Main.cpp.
// Depends on Do_Something.cpp

int DoSome(int x, int y);

int main()
{
    int x=0, y=0;

    std::cin >> x;
    std::cin >> y;

    std::cout << DoSome(x, y);
    std::cout << "\n";

    return 0;
}