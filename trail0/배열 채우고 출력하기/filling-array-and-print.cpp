#include <iostream>
using namespace std;

int main()
{
    char a[10] = {};

    for (int i = 0; i < 10; ++i)
    {
        std::cin >> a[i];
    }

    for (int j = 0; j < 10; ++j)
    {
        std::cout << a[9 - j];
    }

    return 0;
}