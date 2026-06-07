#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    std::cin >> A >> B;

    double sum = A + B;

    std::cout << sum << ' ';

    std::cout << std::fixed;
    std::cout.precision(1);

    std::cout << sum / 2 << '\n';

    return 0;
}