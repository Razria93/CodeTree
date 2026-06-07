#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    std::cin >> a >> b;
    a += b;
    b += a;

    std::cout << a << ' ' << b << '\n';

    return 0;
}