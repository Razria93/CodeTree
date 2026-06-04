#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum = 0;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            int N;
            std::cin >> N;

            if (i >= j)
            {
                sum += N;
            }
        }
    }

    std::cout << sum << '\n';

    return 0;
}