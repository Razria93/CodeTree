#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    std::cin >> a >> b;

    double sum = a + b;
    double sub = a - b;

    double result = sum / sub;

    std::cout << std::fixed;
    std::cout.precision(2);

    std::cout << result << '\n';

    return 0;
}