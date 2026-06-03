#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v;

    while (true)
    {
        int N;
        std::cin >> N;

        if (N == 0) break;

        v.push_back(N);
    }

    for (int num : v)
    {
        std::cout << num << '\n';
    }

    return 0;
}