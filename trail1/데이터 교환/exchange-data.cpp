#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6, c = 7;
    int temp = b;
    b = a;
    a = c;
    c = temp;

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';

    return 0;
}