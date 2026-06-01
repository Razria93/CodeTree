#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string A, B;
    std::cin >> A >> B;

    if (A.size() > B.size())
    {
        std::cout << A << ' ' << A.size() << '\n';
    }
    else if (A.size() < B.size())
    {
        std::cout << B << ' ' << B.size() << '\n';
    }
    else
    {
        std::cout << "same" << '\n';
    }


    return 0;
}