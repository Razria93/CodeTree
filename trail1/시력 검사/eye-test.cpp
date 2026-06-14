#include <iostream>
using namespace std;

int main() 
{
    float a, b;
    std::cin >> a >> b;

    if (a >= 1.f && b >= 1.f)
        std::cout << "High" << '\n';
    else if (a >= 0.5f && b >= 0.5f)
        std::cout << "Middle" << '\n';
    else
        std::cout << "Low" << '\n';

    return 0;
}