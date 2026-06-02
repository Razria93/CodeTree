#include <iostream>
using namespace std;

int main()
{
    int N;
    std::cin >> N;

    for (int i = N; i <= 100; ++i)
    {
        if (i >= 90)
            std::cout << 'A' << ' ';
        else if (i >= 80)
            std::cout << 'B' << ' ';
        else if (i >= 70)
            std::cout << 'C' << ' ';
        else if (i >= 60)
            std::cout << 'D' << ' ';
        else
            std::cout << 'F' << ' ';
    }

    return 0;
}