#include <iostream>
using namespace std;

int main()
{
    int a = 13;
    float g = 0.165;

    std::cout << std::fixed;
    std::cout.precision(6);
    std::cout << a << " * " << g << " = " << a * g << '\n';

    return 0;
}