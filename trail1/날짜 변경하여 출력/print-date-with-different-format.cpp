#include <iostream>
using namespace std;

int main()
{
    int y, m, d;
    std::cin >> y;
    std::cin.get();
    std::cin >> m;
    std::cin.get();
    std::cin >> d;

    std::cout << m << '-' << d << '-' << y;

    return 0;
}