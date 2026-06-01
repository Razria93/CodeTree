#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> v;
    v.reserve(N);

    for (int i = 0; i < N; ++i)
    {
        int M;
        std::cin >> M;
        
        v.push_back(M);
    }

    for (size_t j = 0; j < N; ++j)
    {
        std::cout << v[j] * v[j] << ' ';
    }

    return 0;
}