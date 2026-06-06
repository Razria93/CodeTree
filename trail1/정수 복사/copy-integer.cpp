#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 4;
    b = a;

    std::cout << a << ' ' << b << '\n';
    std::cout << a * b << '\n';

    return 0;
}