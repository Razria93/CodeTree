#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, M;
    std::cin >> N >> M;

    int arr_1[10][10];
    int arr_2[10][10];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
        {
            std::cin >> arr_1[i][j];
        }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
        {
            std::cin >> arr_2[i][j];
        }

    for (int a = 0; a < N; ++a)
    {
        for (int b = 0; b < M; ++b)
        {
            bool result = arr_1[a][b] != arr_2[a][b];

            std::cout << result << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}