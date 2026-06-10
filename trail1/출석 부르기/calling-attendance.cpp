#include <iostream>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    if(N == 1)
        std::cout << "John" << '\n';
    else if (N == 2)
        std::cout << "Tom" << '\n';
    else if (N == 3)
        std::cout << "Paul" << '\n';
    else
        std::cout << "Vacancy" << '\n';

    return 0;
}