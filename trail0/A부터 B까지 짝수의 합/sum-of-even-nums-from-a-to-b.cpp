#include <iostream>
using namespace std;

int main()
{
    int A, B;
    std::cin >> A >> B;

    int sum = 0;

    for (int i = A; i <= B; ++i)
    {
        if (i % 2 == 1) continue;

        sum += i;
    }

    std::cout << sum;

    return 0;
}