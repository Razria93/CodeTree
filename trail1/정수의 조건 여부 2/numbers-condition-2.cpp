#include <iostream>
using namespace std;

int main() 
{
    int a;
    std::cin >> a;

    if (a == 5)
        std::cout << 'A' << '\n';
    else if (a % 2 == 0)
        std::cout << 'B' << '\n';

    return 0;
}