#include <iostream>
using namespace std;

int main()
{
    int arr_1[3][3];
    int arr_2[3][3];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            std::cin >> arr_1[i][j];
        }

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
        {
            std::cin >> arr_2[i][j];
        }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cout << arr_1[i][j] * arr_2[i][j] << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}