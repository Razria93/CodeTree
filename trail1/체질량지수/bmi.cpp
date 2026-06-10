#include <iostream>
using namespace std;

int main() 
{
    int h, w;
    std::cin >> h >> w;

    double b = (10000 * w) / (h * h);
    
    std::cout << std::fixed;
    std::cout.precision(0);

    std::cout << b << '\n';

    if(b >= 25)
        std::cout << "Obesity" << '\n';

    return 0;
}