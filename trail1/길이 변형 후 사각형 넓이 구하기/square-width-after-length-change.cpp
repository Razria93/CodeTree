#include <iostream>
using namespace std;

int main()
{
    int w, v;
    std::cin >> w >> v;
    
    w += 8;
    v *= 3;

    std::cout << w << '\n';
    std::cout << v << '\n';
    std::cout << w * v << '\n';

    return 0;
}