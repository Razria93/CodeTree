#include <iostream>
using namespace std;

int main() 
{
    int gender, age;
    std::cin >> gender >> age;

    std::cout << (gender == 0 ? age >= 19 ? "MAN" : "BOY" : age >= 19 ? "WOMAN" : "GIRL") << '\n';

    return 0;
}