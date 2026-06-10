#include <iostream>
using namespace std;

int main() 
{
    float a;
    std::cin >> a;

    if ( a >= 1.f)
        std::cout << "High" << '\n';
    else if(a >= 0.5f)
        std::cout << "Middle" << '\n';
    else
        std::cout << "Low" << '\n';

    return 0;
}