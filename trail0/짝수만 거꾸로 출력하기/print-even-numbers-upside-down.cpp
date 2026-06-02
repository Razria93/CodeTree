#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> v;
    v.resize(N);

    for (int i = 0; i < N; ++i)
    {
        std::cin >> v[i];
    }

    std::reverse(v.begin(), v.end());

    for (int num : v)
    {
        if (num % 2 == 0)
            std::cout << num << ' ';
    }

    return 0;
}