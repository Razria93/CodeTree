#include <iostream>
using namespace std;

int main() 
{
    
    int isWoman, N;
    std::cin >> isWoman >> N;

    if(isWoman)
    {
        if(N >= 19)
        {
            std::cout << "WOMAN";
        }
        else
        {
            std::cout << "GIRL";
        }
    }
    else
    {
        if(N >= 19)
        {
            std::cout << "MAN";
        }
        else
        {
            std::cout << "BOY";
        }
    }

    return 0;
}