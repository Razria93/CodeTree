#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, d, y;
    std::cin >> m;
    std::cin.get();
    std::cin >> d;
    std::cin.get();
    std::cin >> y;

    std::cout << y << '.' << m << '.' << d;

    return 0;
}