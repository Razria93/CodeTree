#include <iostream>

int main()
{
    float N;
    std::cin >> N;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << N << '\n';

    return 0;
}