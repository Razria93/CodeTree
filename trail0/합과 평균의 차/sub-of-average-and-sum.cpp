#include <iostream>
#include <algorithm>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;

    int sum = A + B + C;
    int avg = sum / 3;

    std::cout << sum << '\n' << avg << '\n' << sum - avg << '\n';

    return 0;
}