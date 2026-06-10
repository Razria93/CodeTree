#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    std::cout << N * N << '\n';

    if (N < 5)
        std::cout << "tiny" << '\n';

    return 0;
}