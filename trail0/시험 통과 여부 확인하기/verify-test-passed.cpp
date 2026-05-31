#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    if (N >= 80)
        std::cout << "pass" << '\n';
    else
        std::cout << 80 - N << " more score" << '\n';

    return 0;
}