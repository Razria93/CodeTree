#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    std::cout << N << '\n';

    if (N < 0)
        std::cout << "minus" <<'\n';

    return 0;
}