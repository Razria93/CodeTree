#include <iostream>
#include <algorithm>

int main()
{
    int A, B;
    std::cin >> A >> B;

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << A + B << ' ' << (static_cast<float>(A) + static_cast<float>(B)) / 2 << '\n';

    return 0;
}