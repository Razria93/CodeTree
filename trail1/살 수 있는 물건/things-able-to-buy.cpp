#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    if(N >= 3000)
        std::cout << "book" << '\n';
    else if (N >= 1000)
        std::cout << "mask" << '\n';
    else
        std::cout << "no" << '\n';

    return 0;
}