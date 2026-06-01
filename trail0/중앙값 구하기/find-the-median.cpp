#include <iostream>
using namespace std;

int main() 
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A > B)
    {
        if (A > C)
        {
            if (B > C)
            {
                std::cout << B;
            }
            else
            {
                std::cout << C;
            }
        }
        else // C > A
        {
            std::cout << A;
        }
    }
    else // B > A
    {
        if (B > C)
        {
            if(A > C)
            {
                std::cout << A;
            }
            else
            {
                std::cout << C;
            }
        }
        else // C > B
        {
            std::cout << B;
        }
    }

    return 0;
}