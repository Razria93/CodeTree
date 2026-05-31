#include <iostream>

int main()
{
    float a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::fixed;
    std::cout.precision(3);

    std::cout << a << '\n' << b << '\n' << c << '\n';

    return 0;
}