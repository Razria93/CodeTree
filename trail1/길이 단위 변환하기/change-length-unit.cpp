#include <iostream>
using namespace std;

int main()
{
    float ft = 30.48f;
    float mi = 160934.f;

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << "9.2ft = " << 9.2f * ft << "cm" << '\n';
    std::cout << "1.3mi = " << 1.3f * mi << "cm" << '\n';

    return 0;
}