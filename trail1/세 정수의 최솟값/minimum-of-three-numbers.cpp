#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << std::min(a, std::min(b, c)) << '\n';

    return 0;
}