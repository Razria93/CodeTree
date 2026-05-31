#include <iostream>
#include <algorithm>

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::swap(a, b);

    std::cout << a << ' ' << b << '\n';

    return 0;
}