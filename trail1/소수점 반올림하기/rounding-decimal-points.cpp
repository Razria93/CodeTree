#include <iostream>
using namespace std;

int main()
{
    float a = 25.352f;

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << a;

    return 0;
}