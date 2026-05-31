#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    bool AsB = a < b;
    bool AeB = a == b;

    std::cout << AsB << ' ' << AeB;

    return 0;
}