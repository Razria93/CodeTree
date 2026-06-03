#include <iostream>
using namespace std;

int main()
{
    int count_3x = 0;
    int count_5x = 0;

    for (int i = 0; i < 10; ++i)
    {
        int N;
        std::cin >> N;

        if (N % 3 == 0) ++count_3x;
        if (N % 5 == 0) ++count_5x;
    }

    std::cout << count_3x << ' ' << count_5x;

    return 0;
}