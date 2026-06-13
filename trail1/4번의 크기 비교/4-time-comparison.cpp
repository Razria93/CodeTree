#include <iostream>
using namespace std;

int main() 
{
    int A;
    int B, C, D, E;
    std::cin >> A >> B >> C >> D >> E;

    std::cout << (A > B) << '\n';
    std::cout << (A > C) << '\n';
    std::cout << (A > D) << '\n';
    std::cout << (A > E) << '\n';

    return 0;
}