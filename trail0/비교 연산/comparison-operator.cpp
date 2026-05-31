#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;

    bool AbeB = A >= B;
    bool AbB = A > B;
    bool AseB = A <= B;
    bool AsB = A < B;
    bool AeB = A == B;
    bool AneB = A != B;

    std::cout 
        << AbeB << '\n'
        << AbB << '\n'
        << AseB << '\n'
        << AsB << '\n'
        << AeB << '\n'
        << AneB << '\n';

    return 0;
}