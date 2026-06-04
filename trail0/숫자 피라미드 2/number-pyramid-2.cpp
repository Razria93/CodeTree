#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cin >> N;

    int num = 0;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << ++num << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}