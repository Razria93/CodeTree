#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int min = std::min(a, std::min(b, c));

    std::cout << (a == min) << ' ';
    std::cout << (a == b && b == c) << '\n';

    return 0;
}