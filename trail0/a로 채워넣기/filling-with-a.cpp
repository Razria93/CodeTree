#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string S;
    std::cin >> S;

    S[1] = 'a';
    S[S.size() - 2] = 'a';

    std::cout << S;

    return 0;
}