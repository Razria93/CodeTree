#include <iostream>
using namespace std;

int main() 
{
    int n;
    std::cin >> n;

    if(n < 0)
        std::cout << "ice" << '\n';
    else if (n >= 100)
        std::cout << "vapor" << '\n';
    else
        std::cout << "water" << '\n';

    return 0;
}