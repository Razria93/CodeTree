#include <iostream>
using namespace std;

int main() 
{
    char C;
    std::cin >> C;

    if(C == 'S')
        std::cout << "Superior" << '\n';
    else if (C == 'A')
        std::cout << "Excellent" << '\n';
    else if (C == 'B')
        std::cout << "Good" << '\n';
    else if (C == 'C')
        std::cout << "Usually" << '\n';
    else if (C == 'D')
        std::cout << "Effort" << '\n';
    else
        std::cout << "Failure" << '\n';

    return 0;
}