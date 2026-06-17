#include <iostream>
using namespace std;

int main() 
{
    int a;
    std::cin >> a;

    if (a % 13 == 0 || a % 19 == 0)
        std::cout << "True" << '\n';
    else
        std::cout << "False" << '\n';

    return 0;
}