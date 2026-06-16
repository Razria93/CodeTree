#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a;
    std::cin >> a;

    std::string str = (a < 10 || a > 20) ? "yes" : "no";
    std::cout << str << '\n';

    return 0;
}