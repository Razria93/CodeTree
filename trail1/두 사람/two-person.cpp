#include <iostream>
using namespace std;

int main() 
{
    int n_A, n_B;
    char c_A, c_B;

    std::cin >> n_A >> c_A;
    std::cin >> n_B >> c_B;

    std::cout << ((n_A >= 19 && c_A == 'M') || (n_B >= 19 && c_B == 'M') ? 1 : 0) << '\n';

    return 0;
}