#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            int N;
            std::cin >> N;

            if (N % 5 == 0) ++count;
        }
    }

    std::cout << count << '\n';

    return 0;
}