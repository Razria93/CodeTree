#include <iostream>
using namespace std;

int main()
{
    double one_ft = 30.48;
    
    double ft;
    std::cin >> ft;

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << ft * one_ft;

    return 0;
}