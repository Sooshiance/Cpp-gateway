#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int x{5};

    int& y{x};

    cout << x << endl;

    cout << y << endl;

    return 0;
}