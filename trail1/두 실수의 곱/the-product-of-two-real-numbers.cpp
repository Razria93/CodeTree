#include <iostream>
using namespace std;

int main()
{
    float a = 5.26f;
    float b = 8.27f;

    std::cout << std::fixed;
    std::cout.precision(3);

    std::cout << a * b;

    return 0;
}