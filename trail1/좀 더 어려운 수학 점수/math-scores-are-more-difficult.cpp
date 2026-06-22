#include <iostream>
using namespace std;

int main() 
{
    int A_Math, A_Eng;
    int B_Math, B_Eng;

    std::cin >> A_Math >> A_Eng;
    std::cin >> B_Math >> B_Eng;

    if (A_Math > B_Math)
        std::cout << 'A' << '\n';
    else if (A_Math < B_Math)
        std::cout << 'B' << '\n';
    else
        std::cout << (A_Eng > B_Eng ? 'A' : 'B') << '\n';

    return 0;
}