#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    for (int k = N; k >  0; --k)
    {
        for (int i = 0; i < k; ++i)
        {
            std::cout << "*" << ' ';
        }

        for (int j = N - k; j > 0; --j)
        {
            std::cout << ' ' << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}