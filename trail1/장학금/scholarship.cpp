#include <iostream>
using namespace std;

int main() 
{
    int mid, fin;
    std::cin >> mid >> fin;

    int reward = 0;

    if(mid >= 90)
    {
        if(fin >= 95)
            reward = 100000;
        else if (fin >= 90)
            reward = 50000;
    }

    std::cout << reward << '\n';

    return 0;
}