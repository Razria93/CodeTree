#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    if (N % 2 != 0 && N % 3 == 0)
        std::cout << "true" << '\n';
    else if (N % 2 == 0 && N % 5 == 0)
        std::cout << "true" << '\n';
    else
        std::cout << "false" << '\n';

    return 0;
}