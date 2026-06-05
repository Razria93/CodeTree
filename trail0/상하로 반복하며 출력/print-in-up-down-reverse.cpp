#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (j % 2 == 0)
                std::cout << i;
            else
                std::cout << N + 1 - i;
        }

        std::cout << '\n';
    }

    return 0;
}