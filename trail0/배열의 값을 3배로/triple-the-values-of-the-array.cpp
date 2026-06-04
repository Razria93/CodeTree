#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            std::cin >> arr[i][j];
        }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << 3 * arr[i][j] << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}