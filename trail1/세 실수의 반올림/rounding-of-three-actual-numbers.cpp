#include <iostream>
using namespace std;

int main() 
{
    double a, b, c;

    std::cin >> a >> b >> c;

    std::cout << std::fixed;
    std::cout.precision(3);

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}