#include <iostream>

namespace A
{
    int main()      // You can define as many as you want with similar names
    {
        std::cout << "A namespace\t";
        return 1;
    }
};

namespace B
{
    int main()      // You can define as many as you want with similar names
    {
        std::cout << "B namespace \t";
        return 2;
    }
};

int main()   // You can define as many as you want with similar names
{
    std::cout << "we have three main functions here : \n"<< std::endl;

    std::cout << "main in namespace A " << A::main() << std::endl;
    
    std::cout << "main in namespace B" << B::main() << std::endl;

    return 0;
}