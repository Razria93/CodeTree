#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> v = { 3, 1, 4, 5, 9 };

    std::cout << v[1] + v[3] + v[4] << '\n';

    return 0;
}