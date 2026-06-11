#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    std::cin >> a >> b;
    if (a % 2 == 0)
        std::cout << "even" << '\n';
    else
        std::cout << "odd" << '\n';

    if (b% 2 == 0)
        std::cout << "even" << '\n';
    else
        std::cout << "odd" << '\n';

    return 0;
}