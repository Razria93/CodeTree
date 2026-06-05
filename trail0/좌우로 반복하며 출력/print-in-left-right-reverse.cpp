#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i)
    {
        if(i % 2 == 0)
        {
            for (int j = 1; j <= N; ++j)
                std::cout << j;
        }
        else
        {
            for (int k = N; k >= 1; --k)
                std::cout << k;
        }

        std::cout << '\n';
    }

    return 0;
}