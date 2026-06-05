#include <iostream>
using namespace std;

int main() 
{
    while(true)
    {
        int i;
        std::cin >> i;

        if(i > 25) 
            std::cout << "Lower" <<'\n';
        else if (i < 25)
            std::cout << "Higher" << '\n';
        else
        {
            std::cout << "Good" << '\n';
            break;
        }   
    }

    return 0;
}