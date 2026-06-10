#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    if (N >= 90)
        std::cout << 'A' << '\n';
    else if (N >= 80)
        std::cout << 'B' << '\n';
    else if (N >= 70)
        std::cout << 'C' << '\n';
    else if (N >= 60)
        std::cout << 'D' << '\n';
    else
        std::cout << 'F' << '\n';

    return 0;
}