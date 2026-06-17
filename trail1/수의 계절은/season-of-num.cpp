#include <iostream>
using namespace std;

int main() 
{
    int M;
    std::cin >> M;

    if (M >= 3 && M <= 5)
        std::cout << "Spring" << '\n';
    else if (M >= 6 && M <= 8)
        std::cout << "Summer" << '\n';
    else if (M >= 9 && M <= 11)
        std::cout << "Fall" << '\n';
    else
        std::cout << "Winter" <<'\n';

    return 0;
}