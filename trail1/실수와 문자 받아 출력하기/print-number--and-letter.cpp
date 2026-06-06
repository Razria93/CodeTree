#include <iostream>
using namespace std;

int main() 
{
    char c;
    double a, b;

    std::cin >> c >> a >> b;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << c << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';

    return 0;
}