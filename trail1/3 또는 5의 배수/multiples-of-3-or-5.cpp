#include <iostream>
using namespace std;

int main() 
{
    int A;
    std::cin >> A;

    if (A % 3 == 0)
        std::cout << "YES" << '\n';
    else
        std::cout << "NO" << '\n';

    if (A % 5 == 0)
        std::cout << "YES" << '\n';
    else
        std::cout << "NO" << '\n';

    return 0;
}