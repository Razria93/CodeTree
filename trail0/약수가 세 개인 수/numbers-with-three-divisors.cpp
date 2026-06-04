#include <iostream>
using namespace std;

int main()
{
    int start, end;
    std::cin >> start >> end;

    int count = 0;

    int prime[11] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

    for (int i = start; i <= end; ++i)
    {
        for (int j = 0; j < sizeof(prime); ++j)
        {
            if (i < prime[j] * prime[j]) break;
            
            if (i == prime[j] * prime[j])
            {
                ++count;
                break;
            }
        }
    }

    std::cout << count;

    return 0;
}