#include <iostream>
using namespace std;

int main() 
{
    int a;
    std::cin >> a;

    if (a >= 10 && a <= 20)
        std::cout << "yes" << '\n';
    else
        std::cout << "no" << '\n';

    return 0;
}