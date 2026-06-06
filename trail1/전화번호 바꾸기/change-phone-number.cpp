#include <iostream>
using namespace std;

int main()
{
    int w, x, y;
    std::cin >> w;
    std::cin.get();
    std::cin >> x;
    std::cin.get();
    std::cin >> y;

    std::cout << "010" << '-' << y << '-' << x;

    return 0;
}