#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string S;
    std::cin >> S;

    std::string H;
    std::string M;

    bool convert = false;

    for (char c : S)
    {
        if (c == ':') 
        {
            convert = true;
            continue;
        }

        if (!convert)
        {
            H.push_back(c);
        }
        else
        {
            M.push_back(c);
        }
    }

    int num_h = std::stoi(H);
    int num_m = std::stoi(M);

    ++num_h;

    std::cout << num_h << ':' << num_m;

    return 0;
}