#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int A, B;
    std::cin >> A >> B;

    std::vector<int> v;
    v.reserve(10);

    v.push_back(A);
    v.push_back(B);

    for (int i = 2; i < 10; ++i)
    {
        v.push_back((v[i - 2] +v[i - 1]) % 10);
    }

    for (int j = 0; j < 10; ++j)
    {
        std::cout << v[j] << ' ';
    }

    return 0;
}