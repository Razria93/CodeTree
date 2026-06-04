#include <iostream>
using namespace std;

int main()
{
    int start, end;
    std::cin >> start >> end;

    int count = 0;
    int prime[11] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };

    for (int num : prime)
    {
        int square = num * num;

        if (start <= square && end >= square)
        {
            ++count;
        }
    }

    std::cout << count;

    return 0;
}