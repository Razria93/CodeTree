#include <iostream>
using namespace std;

int main()
{
    int A, B;
    std::cin >> A >> B;

    while (A <= B)
    {
        if (A % 2 == 1)
        {
            std::cout << A << ' ';
            A *= 2;
        }
        else
        {
            std::cout << A << ' ';
            A += 3;
        }
    }

    return 0;
}