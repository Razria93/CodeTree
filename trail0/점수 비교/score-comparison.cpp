#include <iostream>
using namespace std;

int main() 
{
    int math_A, english_A;
    int math_B, english_B;

    std::cin >> math_A >> english_A >> math_B >> english_B;

    if (math_A > math_B && english_A > english_B)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}