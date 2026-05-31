#include <iostream>
using namespace std;

int main() 
{
    int n;
    std::cin >> n;

    if (n >= 3000)
        std::cout << "book" << '\n';
    else if (n >= 1000 && n < 3000)
        std::cout << "mask" << '\n';
    else
        std::cout << "no" << '\n';
    
    return 0;
}